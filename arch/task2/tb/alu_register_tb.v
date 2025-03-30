`timescale 1ns/1ps

module alu_register_tb;
    localparam WIDTH = 8;

    reg clk_i;
    reg arstn_i;
    reg [WIDTH - 1:0] first_i;
    reg [WIDTH - 1:0] second_i;
    reg [2:0] opcode_i;
    wire [WIDTH - 1:0] result_o;

    alu_register #(.WIDTH(WIDTH)) DUT (
        .clk_i      (clk_i      ),
        .arstn_i    (arstn_i    ),
        .first_i    (first_i    ),
        .second_i   (second_i   ),
        .opcode_i   (opcode_i   ),
        .result_o   (result_o   )
    );

    initial $dumpfile("dump.svc");
    always begin
        $dumpvars;
        #5
        $dumpvars;
        clk_i <= ~clk_i;
    end

    initial begin
        clk_i = 1;
        arstn_i = 1;
        first_i = 0;
        second_i = 0;
        opcode_i = 0;

        #10;
        arstn_i = 0;
        #10;
        arstn_i = 1;
    
        
        first_i = 8'hFF; second_i = 8'h00; opcode_i = 3'b000;
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("NOR test failed: %h", result_o);

        #5;
        first_i = 8'hAA; second_i = 8'h55; opcode_i = 3'b001;
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("AND test failed: %h", result_o);

        #5;
        first_i = 8'h01; second_i = 8'h02; opcode_i = 3'b010;
        @(posedge clk_i);
        assert(result_o === 8'h03) else $error("ADD test failed: %h", result_o);

        #5;
        first_i = 8'hFF; second_i = 8'h01; opcode_i = 3'b011;
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("ADD2 test failed: %h", result_o);

        #5;
        second_i = 8'hAA; opcode_i = 3'b100;
        @(posedge clk_i);
        assert(result_o === 8'h55) else $error("NOT B test failed: %h", result_o);

        #5;
        first_i = 8'hAA; second_i = 8'h55; opcode_i = 3'b101;
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("XNOR test failed: %h", result_o);

        #5;
        first_i = 8'h12; second_i = 8'h12; opcode_i = 3'b110;
        @(posedge clk_i);
        assert(result_o === 8'hFF) else $error("EQUAL (true) test failed: %h", result_o);
    
        #5;
        first_i = 8'h12; second_i = 8'h34; opcode_i = 3'b110;
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("EQUAL (false) test failed: %h", result_o);

        #5;
        first_i = 8'hFF; second_i = 3; opcode_i = 3'b111;
        @(posedge clk_i);
        assert(result_o === 8'h1F) else $error("SHIFT test failed: %h", result_o);

        #5;
        first_i = 8'hFF; second_i = 8'd8; opcode_i = 3'b111;
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("Shift overflow test failed: %h", result_o);

        #5;
        first_i = 8'hFF; second_i = 8'hFF; opcode_i = 3'b110;
        @(posedge clk_i);
        assert(result_o === 8'hFF) else $error("Pre-reset test failed: %h", result_o);
    
        #5;
        arstn_i = 0; 
        @(posedge clk_i);
        assert(result_o === 8'h00) else $error("Reset test failed: %h", result_o);
        arstn_i = 1;

        #50;
        $display("All tests completed!");
        $finish;
    end
endmodule
