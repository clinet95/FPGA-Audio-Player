`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:47:30 01/28/2020 
// Design Name: 
// Module Name:    mux2_1 
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

//2-1 Multiplexer Module
module mux2_1(In_1, In_2, sel, out);

	input[3:0] In_1, In_2;
	input sel;
	output[3:0] out;

	assign out = (sel) ? In_2 : In_1;
	
endmodule
