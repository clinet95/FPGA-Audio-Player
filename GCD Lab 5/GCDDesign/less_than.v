`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:25:13 02/17/2020 
// Design Name: 
// Module Name:    less_than 
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

//X < Y Comparator Module
module less_than(x, y, x_lt_y);
	input [3:0] x, y;
	output x_lt_y;
	
	assign x_lt_y = (x < y)?1'b1:1'b0;
	
endmodule
