`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:24:04 02/17/2020
// Design Name:   GCDtop
// Module Name:   D:/Xilinx/Projects/Lab 5/GCDDesign/GCDTop_testbench.v
// Project Name:  GCDDesign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GCDtop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GCDTop_testbench;

	// Inputs
	reg CLK;
	reg [3:0] X;
	reg [3:0] Y;
	reg START;
	reg RESET;

	// Outputs
	wire [3:0] GCD_OUT;
	wire DONE;

	// Instantiate the Unit Under Test (UUT)
	GCDtop uut (
		.CLK(CLK), 
		.X(X), 
		.Y(Y), 
		.START(START), 
		.RESET(RESET), 
		.GCD_OUT(GCD_OUT), 
		.DONE(DONE)
	);
	
	always begin
		CLK = 0;
		#1;
		CLK = 1;
		#1;
	end

	initial begin
		//Initialize all variables
		X = 0;
		Y = 0;
		START = 0;
		RESET = 0;
		#10;
		
		//Try GCD of 12 and 9
		X = 12;
		Y = 9;
		START = 1;
		#10;
		START = 0;
		#200;
		
		//Change input numbers, but check if registers change
		X = 15;
		Y = 4;
		#100;
		
		//Check if it will read new inputs without reseting
		START = 1;
		#100;
		
		//Reset
		START = 0;
		RESET = 1;
		#10;
		
		//Compute GCD of 15 and 4
		RESET = 0;
		#10;
		START = 1;
		#10;
		START = 0;
		#300;
		$finish;

	end
      
endmodule

