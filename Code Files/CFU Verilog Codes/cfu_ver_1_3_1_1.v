module Cfu (
  input               cmd_valid,
  output              cmd_ready,
  input      [9:0]    cmd_payload_function_id,
  input      [31:0]   cmd_payload_inputs_0,
  input      [31:0]   cmd_payload_inputs_1,
  output reg          rsp_valid,
  input               rsp_ready,
  output reg [31:0]   rsp_payload_outputs_0,
  input               reset,
  input               clk
);
	
	localparam InputOffset = $signed(9'd128);
	reg signed [7:0] filter0, filter1, filter2, filter3;
	reg signed [7:0] filter4, filter5, filter6, filter7;
	reg signed [7:0] filter8, filter9, filter10, filter11;
	reg signed [31:0] dotprod1_reg,dotprod2_reg, result;
	
	// Output Values Register File
	reg signed [31:0] output_val[0:27][0:27];
	integer i,j;
	initial begin
		for(i = 0; i<28; i=i+1)begin
			for(j=0; j<28; j=j+1)
				output_val[i][j] = 0;
		end
	end
	
	// SIMD multiply step:
	
	wire signed [15:0] prod_0, prod_1, prod_2, prod_3;
	wire signed [15:0] prod_4, prod_5, prod_6, prod_7;
	wire signed [15:0] prod_8, prod_9, prod_10, prod_11;
	
	assign prod_0 =  ($signed(cmd_payload_inputs_0[7 : 0]) + InputOffset)
	  * $signed(filter0);
	assign prod_1 =  ($signed(cmd_payload_inputs_0[15: 8]) + InputOffset)
	  * $signed(filter1);
	assign prod_2 =  ($signed(cmd_payload_inputs_0[23:16]) + InputOffset)
	  * $signed(filter2);
	assign prod_3 =  ($signed(cmd_payload_inputs_0[31:24]) + InputOffset)
	  * $signed(filter3);
	
	assign prod_4 =  ($signed(cmd_payload_inputs_0[7 : 0]) + InputOffset)
		* $signed(filter4);
	assign prod_5 =  ($signed(cmd_payload_inputs_0[15: 8]) + InputOffset)
		* $signed(filter5);
	assign prod_6 =  ($signed(cmd_payload_inputs_0[23:16]) + InputOffset)
		* $signed(filter6);
	assign prod_7 =  ($signed(cmd_payload_inputs_0[31:24]) + InputOffset)
		* $signed(filter7);
	
	assign prod_8 =  ($signed(cmd_payload_inputs_1[7 : 0]) + InputOffset)
		* $signed(filter8);
	assign prod_9 =  ($signed(cmd_payload_inputs_1[15: 8]) + InputOffset)
		* $signed(filter9);
	assign prod_10 =  ($signed(cmd_payload_inputs_1[23:16]) + InputOffset)
		* $signed(filter10);
	assign prod_11 =  ($signed(cmd_payload_inputs_1[31:24]) + InputOffset)
		* $signed(filter11);
	

	wire signed [31:0] sum_prods1,sum_prods2,sum_prods3;
	assign sum_prods1 = prod_0 + prod_1 + prod_2 + prod_3;
	assign sum_prods2 = prod_4 + prod_5 + prod_6 + prod_7;
	assign sum_prods3 = prod_8 + prod_9 + prod_10 + prod_11;

	// Only not ready for a command when we have a response.
	assign cmd_ready = ~rsp_valid;
	always @(posedge clk) begin 
		if (reset) begin
			rsp_payload_outputs_0 <= 32'b0;
			rsp_valid <= 1'b0;
		end else if (rsp_valid) begin

		  // Waiting to hand off response to CPU.
			rsp_valid <= ~rsp_ready;
		end else if (cmd_valid) begin
			case(cmd_payload_function_id[9:3])
				7'b0: begin
					case(cmd_payload_function_id[2:0])
						3'b0: begin
							rsp_payload_outputs_0 <= 0;
							rsp_valid <= 1'b1;
						end
						3'b1: begin
							dotprod1_reg <= sum_prods1;
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							result <= sum_prods2 + sum_prods3 + dotprod1_reg;
							rsp_valid <= 1'b1;
						end
					endcase
				end
				7'b1:begin
					// input form {filter3, filter2, filter1, filter0}
					case(cmd_payload_function_id[2:0])
						3'b0: begin
							filter0 <= 0;
							filter1 <= 0;
							filter2 <= 0;
							filter3 <= 0;
							rsp_valid <= 1'b1;
						end
						3'b1: begin
							filter0 <= cmd_payload_inputs_0[7:0];
							filter1 <= cmd_payload_inputs_0[15:8];
							filter2 <= cmd_payload_inputs_0[23:16];
							filter3 <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							filter4 <= cmd_payload_inputs_0[7:0];
							filter5 <= cmd_payload_inputs_0[15:8];
							filter6 <= cmd_payload_inputs_0[23:16];
							filter7 <= cmd_payload_inputs_0[31:24];
							filter8 <= cmd_payload_inputs_1[7:0];
							filter9 <= cmd_payload_inputs_1[15:8];
							filter10 <= cmd_payload_inputs_1[23:16];
							filter11 <= cmd_payload_inputs_1[31:24];
							rsp_valid <= 1'b1;
						end
					endcase
				end
				7'd2:begin
					// Output Vals Register File
					case(cmd_payload_function_id[2:0])
						3'b0:begin
							for(i = 0; i<28; i=i+1)begin
								for(j=0; j<28; j=j+1)
									output_val[i][j] <= 0;
							end
						end
						3'b1: begin
							output_val[cmd_payload_inputs_0][cmd_payload_inputs_1] <=  output_val[cmd_payload_inputs_0][cmd_payload_inputs_1] + result;
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							rsp_payload_outputs_0 <=  output_val[cmd_payload_inputs_0][cmd_payload_inputs_1];
							output_val[cmd_payload_inputs_0][cmd_payload_inputs_1] <= 0;
							rsp_valid <= 1'b1;
						end
					endcase
				end
			endcase
		end
	end
endmodule
