/*
 * fsm_automatic.c
 *
 *  Created on: Nov 6, 2023
 *      Author: vanbi
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
	case INIT:
		TurnOffAll();
		status = RED_GREEN;
		setTimer1(GreenVal*100);
		setTimer2(100);
		break;
	case RED_GREEN:
		TurnOffAll();
		onRed1();
		onGreen2();

		if(timer2_flag == 1){
			timerLed7Seg1--;
			timerLed7Seg2--;
			if(timerLed7Seg2 <= 0){
				timerLed7Seg2 = YellowVal;
			}
		}

		if(timer1_flag == 1){
			status = RED_YELLOW;
			setTimer1(YellowVal*100);
		}
		break;
	case RED_YELLOW:
		TurnOffAll();
		onRed1();
		onYellow2();

		if(timer2_flag == 1){
			setTimer2(100);
			timerLed7Seg1--;
			if(timerLed7Seg1 <= 0){
				timerLed7Seg1 = GreenVal;
			}
			timerLed7Seg2--;
			if(timerLed7Seg2 <= 0){
				timerLed7Seg2 = RedVal;
			}
		}

		if(timer1_flag == 1){
			status = GREEN_RED;
			setTimer1(GreenVal*100);
		}
		break;
	case GREEN_RED:
		TurnOffAll();
		onGreen1();
		onRed2();

		if(timer2_flag == 1){
			setTimer2(100);
			timerLed7Seg1--;
			if(timerLed7Seg1 <= 0){
				timerLed7Seg1 = YellowVal;
			}
			timerLed7Seg2--;
		}
		if(timer1_flag == 1){
			status = YELLOW_RED;
			setTimer1(YellowVal*100);
		}
		break;
	case YELLOW_RED:
		TurnOffAll();
		onYellow1();
		onRed2();

		if(timer2_flag == 1){
			setTimer2(100);
			timerLed7Seg1--;
			if(timerLed7Seg1 <= 0){
				timerLed7Seg1 = RedVal;
			}
			timerLed7Seg2--;
			if(timerLed7Seg2 <= 0){
				timerLed7Seg2 = GreenVal;
			}
		}
		if(timer1_flag == 1){
			status = RED_GREEN;
			setTimer1(GreenVal*100);
		}
		break;
	default:
		break;
	}

	if(isButtonPressed(0) == 1 && (status == RED_GREEN || status == RED_YELLOW || status == GREEN_RED || status == YELLOW_RED)){
		TurnOffAll();
		status = MAN_RED;
		RedCurr = RedVal;
		GreenCurr = GreenVal;
		YellowCurr = YellowVal;
		setTimer5(1);

		timerLed7Seg1 = RedVal;
		timerLed7Seg2 = 2;
	}
}
