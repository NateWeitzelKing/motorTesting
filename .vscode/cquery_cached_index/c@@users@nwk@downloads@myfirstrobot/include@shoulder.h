
#define _SHOULDER_H_

#include "main.h"
int power;
int turn;
int arm;

void shoulderSet(int speed){
motorSet(1, speed);

}
void shoulder() {
while (1) {
  power = joystickGetAnalog(1, 1);
  turn  = joystickGetAnalog(1, 2);
  arm = joystickGetAnalog(3, 3);
  motorSet(1, power + turn);
  motorSet(10, power - turn);
  motorSet(2, arm);   
}

}
