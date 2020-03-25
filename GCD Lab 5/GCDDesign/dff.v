`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:13:04 02/17/2020 
// Design Name: 
// Module Name:    dff 
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

//4-Bit Register Module
module dff(clk, d, q, enable, reset);

	input clk, enable, reset;
	input [3:0] d;
	output reg [3:0] q;
	
	initial begin q = 0; end

	always @ (negedge clk) begin
		if (reset && !enable) begin 
			q = 0; 
		end
		
		else if (enable && !reset) begin
			q = d;
		end
		
		else begin
			q = q;
		end
	
	end

endmodule
