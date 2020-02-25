`timescale 1ns / 10ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/14/2020 02:01:17 PM
// Design Name: 
// Module Name: test_vedic_2x2
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


module test_vedic_2x2(
   
    );
    reg [1:0] a,b;
    wire [3:0] c;
    
    vedic_2x2 uut(.a(a),
              .b(b),
              .c(c));
    
    initial
     begin
     a=2'b11;
     b=2'b01;
     #10;
     a=2'b10;
     b=2'b11;
     #100;
     $stop;
     end
endmodule
