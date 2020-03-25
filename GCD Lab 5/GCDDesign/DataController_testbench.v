`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:05:58 02/19/2020
// Design Name:   DataControlTest
// Module Name:   D:/Xilinx/Projects/Lab 5/GCDDesign/DataController_testbench.v
// Project Name:  GCDDesign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataControlTest
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DataController_testbench;

	// Inputs
	reg [3:0] x_i;
	reg [3:0] y_i;
	reg go_i;
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] state;
	wire x_neq_y;
	wire x_lt_y;
	wire x_sel;
	wire y_sel;
	wire x_write;
	wire y_write;
	wire d_write;
	wire [3:0] GCD_OUT;
	wire DONE;
	wire [3:0] x_dff_out;
	wire [3:0] y_dff_out;

	// Instantiate the Unit Under Test (UUT)
	DataControlTest uut (
		.state(state), 
		.x_i(x_i), 
		.y_i(y_i), 
		.x_neq_y(x_neq_y), 
		.x_lt_y(x_lt_y), 
		.go_i(go_i), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.x_write(x_write), 
		.y_write(y_write), 
		.d_write(d_write), 
		.clk(clk), 
		.reset(reset), 
		.GCD_OUT(GCD_OUT), 
		.DONE(DONE), 
		.x_dff_out(x_dff_out), 
		.y_dff_out(y_dff_out)
	);
	
	always begin
		clk = 0;
		#10;
		clk = 1;
		#10;
	end

	initial begin
		// Initialize Inputs
		x_i = 0;
		y_i = 0;
		go_i = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#300;
		x_i = 12;
		y_i = 9;
		go_i = 1;
		
		#300;
		go_i = 0;
		
		#50;
		x_i = 9;
		y_i = 8;
		go_i = 1;
		
		#300;
//		x_i = ;
//		y_i = ;
//		go_i = ;
//		
//		#300;
//		x_i = ;
//		y_i = ;
//		go_i = ;
//		
//		#300;
//		x_i = ;
//		y_i = ;
//		go_i = ;
        
		end
      
endmodule

