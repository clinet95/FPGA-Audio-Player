`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:30 02/17/2020 
// Design Name: 
// Module Name:    GCDtop 
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
module GCDtop(CLK, X, Y, START, RESET, GCD_OUT, DONE);

	input CLK, START, RESET;
	input[3:0] X, Y;
	output [3:0] GCD_OUT;
	output DONE;

	wire x_sel, y_sel, x_write, y_write, d_write, notEqual, lessThan;

	Datapath datapath(.reset(RESET), .clk(CLK), .x_i(X), .y_i(Y), .x_sel(x_sel), .y_sel(y_sel), .x_write(x_write), 
				.y_write(y_write), .d_write(d_write), .notEqual(notEqual), .lessThan(lessThan), .d_o(GCD_OUT));

	Controller controller(.clk(CLK), .reset(RESET), .go_i(START), .x_sel(x_sel), .x_write(x_write), .y_sel(y_sel), 
								.y_write(y_write), .d_write(d_write), .x_neq_y(notEqual), .x_lt_y(lessThan), .done(DONE));



endmodule
