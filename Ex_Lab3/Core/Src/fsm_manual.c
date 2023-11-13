/*
 * fsm_manual.c
 *
 *  Created on: Nov 12, 2023
 *      Author: vanbi
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status){
		case MAN_RED:
			if(timer5_flag == 1){
				setTimer5(10);
				if(ToggleFlag == 0){
					ToggleFlag = 1;
					onRed1();
					onRed1();
				} else {
					TurnOffAll();
				}
			}
			if(isButtonPressed(0) == 1){
				status = MAN_YELLOW;
				timerLed7Seg1 = YellowVal;
				timerLed7Seg2 = 3;
				setTimer5(1);
			}
			if(isButtonPressed(1) == 1){
				RedCurr++;
				timerLed7Seg1++;
//				if(RedCurr >= 100){
//					RedCurr = 2;
//				}
			}
			if(isButtonPressed(2) == 2){
				RedVal = RedCurr;
			}
			break;
		case MAN_YELLOW:
			if(timer5_flag == 1){
				setTimer5(10);
				if(ToggleFlag == 0){
					ToggleFlag = 1;
					onYellow1();
					onYellow2();
				} else {
					TurnOffAll();
				}
			}
			if(isButtonPressed(0) == 1){
				status = MAN_GREEN;
				timerLed7Seg1 = GreenVal;
				timerLed7Seg2 = 4;
				setTimer5(1);
			}
			if(isButtonPressed(1) == 1){
				YellowCurr++;
				timerLed7Seg1++;
//				if(YellowCurr >= RedVal){
//					YellowCurr = 1;
//				}
			}
			if(isButtonPressed(2) == 2){
				RedVal = RedCurr;
			}
			break;
		case MAN_GREEN:
			break;
			if(timer5_flag == 1){
				setTimer5(10);
				if(ToggleFlag == 0){
					ToggleFlag = 1;
					onGreen1();
					onGreen2();
				} else {
					TurnOffAll();
				}
			}
			if(isButtonPressed(0) == 1){
				status = MAN_GREEN;
				timerLed7Seg1 = GreenVal;
				timerLed7Seg2 = 4;
				setTimer5(1);
			}
			if(isButtonPressed(1) == 1){
				GreenCurr++;
				timerLed7Seg1++;
//				if(YellowCurr >= RedVal){
//					YellowCurr = 1;
//				}
			}
			if(isButtonPressed(2) == 2){
				GreenVal = GreenCurr;
			}
	}
	if(isButtonPressed(2) == 1){
		timerLed7Seg1 = RedVal;
	}
}
