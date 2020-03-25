`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:01:13 02/17/2020
// Design Name:   sub4
// Module Name:   D:/Xilinx/Projects/Lab 5/GCDDesign/sub4_testbench.v
// Project Name:  GCDDesign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sub4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sub4_testbench;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] out;

	// Instantiate the Unit Under Test (UUT)
	sub4 uut (
		.a(a), 
		.b(b), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
      a = 5;
		b = 2;

		#100;
		a = 10;
		b = 5;
		
		#100;
		a = 8;
		b = 9;
		
		#100;
		a = 3;
		b = 8;
		
		#100;
		$finish;
		// Add stimulus here

	end
      
endmodule

