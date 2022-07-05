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
	reg signed [31:0] dotprod_reg;
	
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
	assign prod_0 =  ($signed(cmd_payload_inputs_0[7 : 0]) + InputOffset)
	  * $signed(filter0);
	assign prod_1 =  ($signed(cmd_payload_inputs_0[15: 8]) + InputOffset)
	  * $signed(filter1);
	assign prod_2 =  ($signed(cmd_payload_inputs_0[23:16]) + InputOffset)
	  * $signed(filter2);
	assign prod_3 =  ($signed(cmd_payload_inputs_0[31:24]) + InputOffset)
	  * $signed(filter3);

	wire signed [31:0] sum_prods;
	assign sum_prods = prod_0 + prod_1 + prod_2 + prod_3;

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
							dotprod_reg <= sum_prods;
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
							output_val[cmd_payload_inputs_0][cmd_payload_inputs_1] <=  output_val[cmd_payload_inputs_0][cmd_payload_inputs_1] + dotprod_reg;
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
