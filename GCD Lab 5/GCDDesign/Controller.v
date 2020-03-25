`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:45 02/17/2020 
// Design Name: 
// Module Name:    Controller 
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
module Controller(clk, reset, go_i, x_sel, x_write, y_sel, y_write, d_write, x_neq_y, x_lt_y, done);

	//Inputs and Outputs
	input go_i, x_neq_y, x_lt_y, reset, clk;
	output reg x_sel, y_sel, x_write, y_write, d_write;
	output reg done = 0;

	//Internal Registers
	reg[3:0] state = state1;

	//States
	localparam 
		state1 = 4'b0000,
		state2 = 4'b0001,
		state2j = 4'b0010,
		state3 = 4'b0011,
		state4 = 4'b0100,
		state5 = 4'b0101,
		state6 = 4'b0110,
		state7 = 4'b0111,
		state8 = 4'b1000,
		state6j = 4'b1001,
		state5j = 4'b1010,
		state9 = 4'b1011,
		state1j = 4'b1100;

		//GCD Controller
		always @ (posedge clk) begin
			if (reset) begin
				state = state1;
				done = 0;
			end //if (reset)
			
			else begin
				case (state) 
					state1 : begin
						d_write = 0;
						state = state2;
					end//state1

					state2 : begin
						if(!go_i)begin
							state = state2j;
						end
						else begin
							state = state3;
						end
					end//state2
					
					state2j : begin
							state = state2;
					end//state2j
					
					state3 : begin
						done = 0;
						x_sel = 0;
						x_write = 1;
						state = state4;
					end//state3

					state4 : begin
						x_write = 0;
						y_sel = 0;
						y_write = 1;
						state = state5;
					end//state4
					
					state5 : begin
						y_write = 0;
						if(x_neq_y)begin
							state = state6;
						end
						else begin
							state = state9;
						end
					end//state5
					
					state6 : begin
						if(x_lt_y)begin
							state = state7;
						end
						else begin
							state = state8;
						end
					end//state6

					state7 : begin
						y_sel = 1;
						y_write = 1;
						state = state6j;
					end//state7
					
					state8 : begin
						x_sel = 1;
						x_write = 1;
						state = state6j;
					end//state8
					
					state6j : begin
						x_write = 0;
						y_write = 0;
						state = state5j;
					end//state6j

					state5j : begin
						state = state5;
					end//state5j
					
					state9 : begin
						d_write = 1;
						state = state1j;
					end//state9
					
					state1j : begin
						state = state1;
						done = 1;
					end//state1j
				endcase //end case
			end //else
		
		end //end always
endmodule
