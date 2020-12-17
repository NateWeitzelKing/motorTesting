#include "Chassis.h"
#include "main.h"
#include "homeShoulder.h"
#include "API.h"
#include "follow.h"

//Home shoulder function
void operatorControl() {
	int homePosition = -160;
	int power, turn;
	    while (1) {
				power = joystickGetAnalog(1, 2); // vertical axis on left joystick
        turn = joystickGetAnalog(1, 1); // horizontal axis on left joystick
       motorSet(1, power + turn);
			 motorSet(10, power - turn);
				if(joystickGetDigital(1, 6, JOY_UP)){
					homeShoulder(homePosition);
				}
				if(joystickGetDigital(1, 8, JOY_LEFT)){
				usFollow();
				}
				if(joystickGetDigital(1,8, JOY_UP)){
				lineFollowing();
				}
				printf("line tracker values are L %d R %d C %d \n", lL, rR, cC);
				delay(100);
				chassisSet(0,0);
			}
			}


//save enable

//Ultrasoinc in - Port 8
//Ultrasonic out - Port 9
//
