`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/14/2020 04:17:06 PM
// Design Name: 
// Module Name: test_vedic_32x32
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


module test_vedic_32x32(

    );
    reg [31:0] a,b;
    wire [63:0] c;
    vedic_32x32 uut(.a(a),
                    .b(b),
                    .c(c));
    initial
     begin
      a=32'd128;
      b=32'd128;
      #10;
      a=32'hffffffff;
      b=32'hffffffff;
      #10;
      $stop;
     end
     
endmodule
