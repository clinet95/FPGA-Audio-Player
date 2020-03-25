`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:05:26 02/17/2020
// Design Name:   Datapath
// Module Name:   D:/Xilinx/Projects/Lab 5/GCDDesign/Datapath_testbench.v
// Project Name:  GCDDesign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Datapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Datapath_testbench;

	// Inputs
	reg reset;
	reg clk;
	reg [3:0] x_i;
	reg [3:0] y_i;
	reg x_sel;
	reg y_sel;
	reg x_write;
	reg y_write;
	reg d_write;

	// Outputs
	wire notEqual;
	wire lessThan;
	wire [3:0] d_o;

	// Instantiate the Unit Under Test (UUT)
	Datapath uut (
		.reset(reset), 
		.clk(clk), 
		.x_i(x_i), 
		.y_i(y_i), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.x_write(x_write), 
		.y_write(y_write), 
		.d_write(d_write), 
		.notEqual(notEqual), 
		.lessThan(lessThan), 
		.d_o(d_o)
	);
	
	always begin
	clk = 0;
	#10;
	clk = 1;
	#10;
	
	end

	initial begin
		// Initialize Inputs
		reset = 0;
		x_i = 0;
		y_i = 0;
		x_sel = 0;
		y_sel = 0;
		x_write = 0;
		y_write = 0;
		d_write = 1;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 1;
		
		#50;
		reset = 0;
		
		#50;
		x_i = 6;
		y_i = 4;
		
		x_write = 1;
		y_write = 1;
		
		#50;
		x_sel = 1;
		y_sel = 1;
		
		#100;
		
		// Add stimulus here

	end
      
endmodule

