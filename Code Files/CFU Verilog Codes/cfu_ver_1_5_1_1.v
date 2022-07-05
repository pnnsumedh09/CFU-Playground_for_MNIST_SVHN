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
	reg signed [7:0] filter[0:2][0:2][0:3];
	reg signed [31:0] dotprod1_reg,dotprod2_reg, result;
	
	// Input Val regs
	reg signed [7:0] inputs[0:2][0:2][0:3];
	
	// Output Values Register File
	reg signed [31:0] output_val[0:27][0:27];
	integer i,j,k;
	initial begin
		for(i = 0; i<28; i=i+1)begin
			for(j=0; j<28; j=j+1)
				output_val[i][j] = 0;
		end
	end
	
	// SIMD multiply step:
	wire signed [15:0] prod[0:2][0:2][0:3];
	
	assign prod[0][0][0] =  ($signed(inputs[0][0][0]) + InputOffset)
	  * $signed(filter[0][0][0]);
	assign prod[0][0][1] =  ($signed(inputs[0][0][1]) + InputOffset)
	  * $signed(filter[0][0][1]);
	assign prod[0][0][2] =  ($signed(inputs[0][0][2]) + InputOffset)
	  * $signed(filter[0][0][2]);
	assign prod[0][0][3] =  ($signed(inputs[0][0][3]) + InputOffset)
	  * $signed(filter[0][0][3]);
	
	assign prod[0][1][0] =  ($signed(inputs[0][1][0]) + InputOffset)
		* $signed(filter[0][1][0]);
	assign prod[0][1][1] =  ($signed(inputs[0][1][1]) + InputOffset)
		* $signed(filter[0][1][1]);
	assign prod[0][1][2] =  ($signed(inputs[0][1][2]) + InputOffset)
		* $signed(filter[0][1][2]);
	assign prod[0][1][3] =  ($signed(inputs[0][1][3]) + InputOffset)
		* $signed(filter[0][1][3]);
	
	assign prod[0][2][0] =  ($signed(inputs[0][2][0]) + InputOffset)
		* $signed(filter[0][2][0]);
	assign prod[0][2][1] =  ($signed(inputs[0][2][1]) + InputOffset)
		* $signed(filter[0][2][1]);
	assign prod[0][2][2] =  ($signed(inputs[0][2][2]) + InputOffset)
		* $signed(filter[0][2][2]);
	assign prod[0][2][3] =  ($signed(inputs[0][2][3]) + InputOffset)
		* $signed(filter[0][2][3]);
	
	
	
	assign prod[1][0][0] =  ($signed(inputs[1][0][0]) + InputOffset)
	  * $signed(filter[1][0][0]);
	assign prod[1][0][1] =  ($signed(inputs[1][0][1]) + InputOffset)
		* $signed(filter[1][0][1]);
	assign prod[1][0][2] =  ($signed(inputs[1][0][2]) + InputOffset)
		* $signed(filter[1][0][2]);
	assign prod[1][0][3] =  ($signed(inputs[1][0][3]) + InputOffset)
		* $signed(filter[1][0][3]);
	
	assign prod[1][1][0] =  ($signed(inputs[1][1][0]) + InputOffset)
		* $signed(filter[1][1][0]);
	assign prod[1][1][1] =  ($signed(inputs[1][1][1]) + InputOffset)
		* $signed(filter[1][1][1]);
	assign prod[1][1][2] =  ($signed(inputs[1][1][2]) + InputOffset)
		* $signed(filter[1][1][2]);
	assign prod[1][1][3] =  ($signed(inputs[1][1][3]) + InputOffset)
		* $signed(filter[1][1][3]);
	
	assign prod[1][2][0] =  ($signed(inputs[1][2][0]) + InputOffset)
		* $signed(filter[1][2][0]);
	assign prod[1][2][1] =  ($signed(inputs[1][2][1]) + InputOffset)
		* $signed(filter[1][2][1]);
	assign prod[1][2][2] =  ($signed(inputs[1][2][2]) + InputOffset)
		* $signed(filter[1][2][2]);
	assign prod[1][2][3] =  ($signed(inputs[1][2][3]) + InputOffset)
		* $signed(filter[1][2][3]);
	
	
	
	assign prod[2][0][0] =  ($signed(inputs[2][0][0]) + InputOffset)
		* $signed(filter[2][0][0]);
	assign prod[2][0][1] =  ($signed(inputs[2][0][1]) + InputOffset)
		* $signed(filter[2][0][1]);
	assign prod[2][0][2] =  ($signed(inputs[2][0][2]) + InputOffset)
		* $signed(filter[2][0][2]);
	assign prod[2][0][3] =  ($signed(inputs[2][0][3]) + InputOffset)
		* $signed(filter[2][0][3]);
	
	assign prod[2][1][0] =  ($signed(inputs[2][1][0]) + InputOffset)
		* $signed(filter[2][1][0]);
	assign prod[2][1][1] =  ($signed(inputs[2][1][1]) + InputOffset)
		* $signed(filter[2][1][1]);
	assign prod[2][1][2] =  ($signed(inputs[2][1][2]) + InputOffset)
		* $signed(filter[2][1][2]);
	assign prod[2][1][3] =  ($signed(inputs[2][1][3]) + InputOffset)
		* $signed(filter[2][1][3]);
	
	assign prod[2][2][0] =  ($signed(inputs[2][2][0]) + InputOffset)
		* $signed(filter[2][2][0]);
	assign prod[2][2][1] =  ($signed(inputs[2][2][1]) + InputOffset)
		* $signed(filter[2][2][1]);
	assign prod[2][2][2] =  ($signed(inputs[2][2][2]) + InputOffset)
		* $signed(filter[2][2][2]);
	assign prod[2][2][3] =  ($signed(inputs[2][2][3]) + InputOffset)
		* $signed(filter[2][2][3]);
	

	wire signed [31:0] sum_prods1,sum_prods2,sum_prods3;
	wire signed [31:0] sum_prods4,sum_prods5,sum_prods6;
	wire signed [31:0] sum_prods7,sum_prods8,sum_prods9;
	assign sum_prods1 = prod[0][0][0] + prod[0][0][1] + prod[0][0][2] + prod[0][0][3];
	assign sum_prods2 = prod[0][1][0] + prod[0][1][1] + prod[0][1][2] + prod[0][1][3];
	assign sum_prods3 = prod[0][2][0] + prod[0][2][1] + prod[0][2][2] + prod[0][2][3];
	
	assign sum_prods4 = prod[1][0][0] + prod[1][0][1] + prod[1][0][2] + prod[1][0][3];
	assign sum_prods5 = prod[1][1][0] + prod[1][1][1] + prod[1][1][2] + prod[1][1][3];
	assign sum_prods6 = prod[1][2][0] + prod[1][2][1] + prod[1][2][2] + prod[1][2][3];
	
	assign sum_prods7 = prod[2][0][0] + prod[2][0][1] + prod[2][0][2] + prod[2][0][3];
	assign sum_prods8 = prod[2][1][0] + prod[2][1][1] + prod[2][1][2] + prod[2][1][3];
	assign sum_prods9 = prod[2][2][0] + prod[2][2][1] + prod[2][2][2] + prod[2][2][3];

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
							result <= sum_prods1 + sum_prods2 + sum_prods3 + sum_prods4 + sum_prods5 + sum_prods6 + sum_prods7 + sum_prods8 + sum_prods9 ;
							{inputs[0][0][3],inputs[0][0][2],inputs[0][0][1],inputs[0][0][0]} <= {inputs[0][1][3],inputs[0][1][2],inputs[0][1][1],inputs[0][1][0]};
							{inputs[0][1][3],inputs[0][1][2],inputs[0][1][1],inputs[0][1][0]} <= {inputs[0][2][3],inputs[0][2][2],inputs[0][2][1],inputs[0][2][0]};
							{inputs[0][2][3],inputs[0][2][2],inputs[0][2][1],inputs[0][2][0]} <= cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							result <= sum_prods2 + sum_prods3 + dotprod1_reg;
							rsp_valid <= 1'b1;
						end
					endcase
				end
				7'b1:begin
					// input form {filter[0][0][3], filter[0][0][2], filter[0][0][1], filter[0][0][0]}
					case(cmd_payload_function_id[2:0])
						3'b0: begin
							filter[0][0][0] <= 0;
							filter[0][0][1] <= 0;
							filter[0][0][2] <= 0;
							filter[0][0][3] <= 0;
							rsp_valid <= 1'b1;
						end
						3'b1: begin
							filter[0][0][0] <= cmd_payload_inputs_0[7:0];
							filter[0][0][1] <= cmd_payload_inputs_0[15:8];
							filter[0][0][2] <= cmd_payload_inputs_0[23:16];
							filter[0][0][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							filter[0][1][0] <= cmd_payload_inputs_0[7:0];
							filter[0][1][1] <= cmd_payload_inputs_0[15:8];
							filter[0][1][2] <= cmd_payload_inputs_0[23:16];
							filter[0][1][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd3: begin
							filter[0][2][0] <= cmd_payload_inputs_0[7:0];
							filter[0][2][1] <= cmd_payload_inputs_0[15:8];
							filter[0][2][2] <= cmd_payload_inputs_0[23:16];
							filter[0][2][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd4: begin
							filter[1][0][0] <= cmd_payload_inputs_0[7:0];
							filter[1][0][1] <= cmd_payload_inputs_0[15:8];
							filter[1][0][2] <= cmd_payload_inputs_0[23:16];
							filter[1][0][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd5: begin
							filter[1][1][0] <= cmd_payload_inputs_0[7:0];
							filter[1][1][1] <= cmd_payload_inputs_0[15:8];
							filter[1][1][2] <= cmd_payload_inputs_0[23:16];
							filter[1][1][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd6: begin
							filter[1][2][0] <= cmd_payload_inputs_0[7:0];
							filter[1][2][1] <= cmd_payload_inputs_0[15:8];
							filter[1][2][2] <= cmd_payload_inputs_0[23:16];
							filter[1][2][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
					endcase
				end
				7'd2:begin
					// input form {filter[0][0][3], filter[0][0][2], filter[0][0][1], filter[0][0][0]}
					case(cmd_payload_function_id[2:0])
						3'b1: begin
							filter[2][0][0] <= cmd_payload_inputs_0[7:0];
							filter[2][0][1] <= cmd_payload_inputs_0[15:8];
							filter[2][0][2] <= cmd_payload_inputs_0[23:16];
							filter[2][0][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							filter[2][1][0] <= cmd_payload_inputs_0[7:0];
							filter[2][1][1] <= cmd_payload_inputs_0[15:8];
							filter[2][1][2] <= cmd_payload_inputs_0[23:16];
							filter[2][1][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
						3'd3: begin
							filter[2][2][0] <= cmd_payload_inputs_0[7:0];
							filter[2][2][1] <= cmd_payload_inputs_0[15:8];
							filter[2][2][2] <= cmd_payload_inputs_0[23:16];
							filter[2][2][3] <= cmd_payload_inputs_0[31:24];
							rsp_valid <= 1'b1;
						end
					endcase
				end
				7'd3:begin
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
				7'd4:begin
					// Input Vals Register File
					case(cmd_payload_function_id[2:0])
						3'b0:begin
							for(i = 0; i<12; i=i+1)begin
								for(j=0;j<3;j=j+1)begin
									for(k=0;k<4;k=k+1)begin
										inputs[i][j][k] <= 0;
									end
								end
							end
						end
						3'b1: begin
							{inputs[0][0][3],inputs[0][0][2],inputs[0][0][1],inputs[0][0][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							{inputs[0][1][3],inputs[0][1][2],inputs[0][1][1],inputs[0][1][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd3: begin
							{inputs[0][2][3],inputs[0][2][2],inputs[0][2][1],inputs[0][2][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd4: begin
							{inputs[1][0][3],inputs[1][0][2],inputs[1][0][1],inputs[1][0][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd5: begin
							{inputs[1][1][3],inputs[1][1][2],inputs[1][1][1],inputs[1][1][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd6: begin
							{inputs[1][2][3],inputs[1][2][2],inputs[1][2][1],inputs[1][2][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
					endcase
				end
				7'd5:begin
					// Input Vals Register File
					case(cmd_payload_function_id[2:0])
						3'b1: begin
							{inputs[2][0][3],inputs[2][0][2],inputs[2][0][1],inputs[2][0][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd2: begin
							{inputs[2][1][3],inputs[2][1][2],inputs[2][1][1],inputs[2][1][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd3: begin
							{inputs[2][2][3],inputs[2][2][2],inputs[2][2][1],inputs[2][2][0]} <=  cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd4:begin
							{inputs[1][0][3],inputs[1][0][2],inputs[1][0][1],inputs[1][0][0]} <= {inputs[1][1][3],inputs[1][1][2],inputs[1][1][1],inputs[1][1][0]};
							{inputs[1][1][3],inputs[1][1][2],inputs[1][1][1],inputs[1][1][0]} <= {inputs[1][2][3],inputs[1][2][2],inputs[1][2][1],inputs[1][2][0]};
							{inputs[1][2][3],inputs[1][2][2],inputs[1][2][1],inputs[1][2][0]} <= cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
						3'd5:begin
							{inputs[2][0][3],inputs[2][0][2],inputs[2][0][1],inputs[2][0][0]} <= {inputs[2][1][3],inputs[2][1][2],inputs[2][1][1],inputs[2][1][0]};
							{inputs[2][1][3],inputs[2][1][2],inputs[2][1][1],inputs[2][1][0]} <= {inputs[2][2][3],inputs[2][2][2],inputs[2][2][1],inputs[2][2][0]};
							{inputs[2][2][3],inputs[2][2][2],inputs[2][2][1],inputs[2][2][0]} <= cmd_payload_inputs_0;
							rsp_valid <= 1'b1;
						end
					endcase
				end
			endcase
		end
	end
endmodule
