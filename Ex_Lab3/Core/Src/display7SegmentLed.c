/*
 * display7SegmentLed.c
 *
 *  Created on: Nov 13, 2023
 *      Author: vanbi
 */
#include "display7SegmentLed.h"

void clearAll7SegLed(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}

void displayParticular7SegLed(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	case 2:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	case 3:
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);

	}
}

void display7SegLed(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, SET);
	case 1:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, SET);
	case 2:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, SET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	case 3:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	case 4:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	case 5:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	case 6:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	case 7:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, SET);
	case 8:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	case 9:
		HAL_GPIO_WritePin(a_GPIO_Port,a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port,b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port,c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port,d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port,e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port,f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port,g_Pin, RESET);
	}
}

