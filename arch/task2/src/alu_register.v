`timescale 1ns/1ps

module alu_register #( 
    parameter WIDTH = 8
) (
    input                   clk_i,
    input                   arstn_i,
    input   [WIDTH - 1:0]   first_i,
    input   [WIDTH - 1:0]   second_i,
    input   [2:0]           opcode_i,
    output  [WIDTH - 1:0]   result_o 
);

reg [WIDTH - 1:0] res_reg;
assign result_o = res_reg;

reg [WIDTH - 1:0] comb_res;

always @ (*) begin
  case (opcode_i)
        3'b000: comb_res = ~(first_i | second_i);
        3'b001: comb_res = (first_i & second_i);
        3'b010: comb_res = (first_i + second_i);
        3'b011: comb_res = (first_i + second_i);
        3'b100: comb_res = ~second_i;
        3'b101: comb_res = ~(first_i ^ second_i);
        3'b110: comb_res = (first_i == second_i) ? {WIDTH{1'b1}} : {WIDTH{1'b0}};
        3'b111: comb_res = (first_i >> second_i);
    endcase 
end

always @ (posedge clk_i or negedge arstn_i) begin
    if (!arstn_i) begin
        res_reg <= 0;
    end else begin
        res_reg <= comb_res;
    end
end

endmodule
