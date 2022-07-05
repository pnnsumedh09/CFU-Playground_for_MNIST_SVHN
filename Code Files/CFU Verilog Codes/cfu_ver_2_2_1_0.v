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
  reg signed [31:0] InputOffset;
  reg signed [7:0] filter0, filter1, filter2, filter3;
  reg signed [15:0] acc;
  // SIMD multiply step:
  wire signed [15:0] prod_0, prod_1, prod_2, prod_3;
	assign prod_0 =  ($signed(cmd_payload_inputs_0[7 : 0]) + $signed(InputOffset))
	  * $signed(filter0);
  assign prod_1 =  ($signed(cmd_payload_inputs_0[15: 8]) + $signed(InputOffset))
	  * $signed(filter1);
  assign prod_2 =  ($signed(cmd_payload_inputs_0[23:16]) + $signed(InputOffset))
	  * $signed(filter2);
  assign prod_3 =  ($signed(cmd_payload_inputs_0[31:24]) + $signed(InputOffset))
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
						rsp_payload_outputs_0 <= sum_prods;
						rsp_valid <= 1'b1;
					end
					3'd2: begin
						InputOffset <= cmd_payload_inputs_0;
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
		endcase
	end
  end
endmodule
