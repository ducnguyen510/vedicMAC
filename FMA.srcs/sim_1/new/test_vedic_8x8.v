`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/14/2020 03:11:55 PM
// Design Name: 
// Module Name: test_vedic_8x8
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


module test_vedic_8x8(

    );
    reg [7:0] a,b;
    wire [15:0] c;
    vedic_8x8 uut(.a(a),
                  .b(b),
                  .c(c));
    initial
     begin
     a=8'd12;
     b=8'd22;
     #10;
     a=8'd127;
     b=8'd127;
     #10;
     $stop;
     end
     
endmodule
