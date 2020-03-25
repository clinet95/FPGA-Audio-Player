`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:17:05 02/17/2020
// Design Name:   dff
// Module Name:   D:/Xilinx/Projects/Lab 5/GCDDesign/dff_testbench.v
// Project Name:  GCDDesign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dff_testbench;

	// Inputs
	reg clk;
	reg [3:0] d;
	reg enable;
	reg reset;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	dff uut (
		.clk(clk), 
		.d(d), 
		.q(q), 
		.enable(enable), 
		.reset(reset)
	);

always begin
	clk = 0;
	#10;
	clk = 1;
	#10;
end

	initial begin
		// Initialize Inputs
		d = 0;
		enable = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		
		#20
		reset = 0;
		enable = 1;
		d = 4;
		
		#50
		
		d = 2;
		
		#50;
		
		reset = 1;

		#50;
		
		reset = 0;
		
		#100;
		
		$finish;
        
		// Add stimulus here

	end
      
endmodule

