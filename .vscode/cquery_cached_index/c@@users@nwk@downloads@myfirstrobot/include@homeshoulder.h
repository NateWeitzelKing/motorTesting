#include "main.h"
#include "shoulder.h"
// Sets the speeds of the left and right wheels of the chassis

void homeShoulder(int homePosition) {
printf("homing started, stand by /n");

while(digitalRead(1) == 1){
  printf("the limit switch is on");
  motorSet(2, 60);
  delay(20);
}
shoulderSet(0);
encoderReset(encoder);
while(encoderGet(encoder) > homePosition){
motorSet(2, -60);
delay(20);
 }
motorStopAll();
shoulderSet(0);
printf("homing complete /n");
}
