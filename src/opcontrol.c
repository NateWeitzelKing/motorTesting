#include "Chassis.h"
#include "main.h"
#include "homeShoulder.h"

//Home shoulder function
void operatorControl() {
	int homePosition = -160;
	int targetDistance;
	    while (1) {
				if(joystickGetDigital(1, 6, JOY_UP)){
					homeShoulder(homePosition);
				}
				if(joystickGetDigital(1, 8, JOY_LEFT)){
				targetDistance = ultrasonicGet(sonar);
				printf("the distance to target is %d \n" , targetDistance);
				if (targetDistance > 20){
				chassisSet(60,60);
				}
				else if (targetDistance < 16){
				chassisSet(-60,-60);
				}
				else{
				chassisSet(0,0);
				}
				}
			delay(100);
			chassisSet(0,0);
			}
			}



//Ultrasoinc in - Port 8
//Ultrasonic out - Port 9
//
