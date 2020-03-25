`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:35:26 02/19/2020 
// Design Name: 
// Module Name:    DataControlTest 
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
module DataControlTest(state, x_i, y_i, x_neq_y, x_lt_y, go_i, x_sel, y_sel, x_write, 
								y_write, d_write, clk, reset, GCD_OUT, DONE, x_dff_out, y_dff_out);
	input[3:0] x_i, y_i;
	input go_i, clk, reset;
	output x_sel, y_sel, x_write, y_write, d_write, x_neq_y, x_lt_y, DONE;
	output[3:0] GCD_OUT, state, x_dff_out, y_dff_out;

	Datapath datapath(.reset(reset), .clk(clk), .x_i(x_i), .y_i(y_i), .x_sel(x_sel), .y_sel(y_sel), .x_write(x_write), 
				.y_write(y_write), .d_write(d_write), .notEqual(x_neq_y), .lessThan(x_lt_y), .d_o(GCD_OUT), .x_dff_out(x_dff_out), 
				.y_dff_out(y_dff_out));

	Controller controller(.clk(clk), .reset(reset), .go_i(go_i), .x_sel(x_sel), .x_write(x_write), .y_sel(y_sel), 
								.y_write(y_write), .d_write(d_write), .x_neq_y(x_neq_y), .x_lt_y(x_lt_y), .done(DONE), .state(state));


endmodule
