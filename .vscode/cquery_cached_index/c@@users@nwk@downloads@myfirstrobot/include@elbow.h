#ifndef _ELBOW_H_
#define _ELBOW_H_

#include "main.h"

int elbow = 5;

void elbowSet(int speed){
motorSet(1, speed);

}
void elbwControl(){
while (1) {

  if(joystickGetDigital(1, 5, JOY_UP)) {
        motorSet(5, 127); // pressing up, so lift should go up
      }
      else if(joystickGetDigital(1, 5, JOY_DOWN)) {
        motorSet(elbow, -127); // pressing down, so lift should go down
      }
      else {
        motorSet(elbow, 0); // no buttons are pressed, stop the lift
      }

  delay(20);
}
}

#endif
