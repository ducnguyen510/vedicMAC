`timescale 1ns / 10ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/14/2020 02:44:19 PM
// Design Name: 
// Module Name: test_vedic_4x4
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


module test_vedic_4x4(

    );
    reg [3:0] a,b;
    wire [7:0] c;
    vedic_4x4 uut(.a(a),
                  .b(b),
                  .c(c));
    initial
    begin
    a =4'd4;
    b =4'd8;
    #10;
    a =4'd15;
    b =4'd15;
    #10;
    $stop;
    end

endmodule
