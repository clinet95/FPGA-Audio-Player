`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:37:51 02/17/2020 
// Design Name: 
// Module Name:    Datapath 
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
module Datapath(reset, clk, x_i, y_i, x_sel, y_sel, x_write, y_write, d_write, notEqual, lessThan, d_o);
	
	//Inputs and Outputs
	input [3:0] x_i, y_i;
	input x_sel, y_sel, x_write, y_write, d_write, clk, reset;
	output notEqual, lessThan;
	output [3:0] d_o;
	
	//Wires
	wire [3:0] x_minus_y, x_dff_out, y_dff_out;
	wire [3:0] y_minus_x;
	wire [3:0] x_dff_in;
	wire [3:0] y_dff_in;
	
	//MUXs
	mux2_1 xMux(.In_1(x_i), .In_2(x_minus_y), .sel(x_sel), .out(x_dff_in));
	mux2_1 yMux(.In_1(y_i), .In_2(y_minus_x), .sel(y_sel), .out(y_dff_in));	
	
	//Registers
	dff xReg (.clk(clk), .d(x_dff_in), .q(x_dff_out), .enable(x_write), .reset(reset));
	dff yReg (.clk(clk), .d(y_dff_in), .q(y_dff_out), .enable(y_write), .reset(reset));
	dff dReg (.clk(clk), .d(x_dff_out), .q(d_o), .enable(d_write), .reset(reset));
	
	//Arithmetic and Logical Operations
	NEQ neq5(.x(x_dff_out), .y(y_dff_out), .x_neq_y(notEqual));
	less_than lt6 (.x(x_dff_out), .y(y_dff_out), .x_lt_y(lessThan));
	sub4 sxy(.a(x_dff_out), .b(y_dff_out), .out(x_minus_y));
	sub4 syx(.a(y_dff_out), .b(x_dff_out), .out(y_minus_x));

endmodule
