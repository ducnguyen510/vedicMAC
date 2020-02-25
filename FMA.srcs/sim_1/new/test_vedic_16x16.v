`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/14/2020 03:39:14 PM
// Design Name: 
// Module Name: test_vedic_16x16
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module test_vedic_16x16(

    );
    reg [15:0] a,b;
    wire [31:0] c;
    vedic_16x16 uut(.a(a),
                    .b(b),
                    .c(c));
   initial
    begin
     a=16'd11;
     b=16'd12;
     #10;
     a=16'd256;
     b=16'd256;
     #10;
     a=16'hffff;
     b=16'hffff;
     #10;
     $stop;
     
    end
endmodule
