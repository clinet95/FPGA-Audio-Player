`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:00:08 02/17/2020 
// Design Name: 
// Module Name:    sub4 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

//Subtractor
module sub4(a, b, out);
	input [3:0] a, b;
	output [3:0] out;
	
	assign out = a - b;

endmodule
