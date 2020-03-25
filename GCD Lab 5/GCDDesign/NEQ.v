`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:22:44 02/17/2020 
// Design Name: 
// Module Name:    NEQ 
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

//X != Y Comparator Module
module NEQ(x, y, x_neq_y);
	input [3:0] x;
	input [3:0] y;
	output x_neq_y;
	
	assign x_neq_y = (x != y) ? 1'b1:1'b0;

endmodule
