
#include "main.h"
#include "homeShoulder.h"

int homePosition = -160;
void operatorControl() {
	    while (1) {
				if(joystickGetDigital(1, 6, JOY_UP)){
					homeShoulder(homePosition);
				}
			}
}
