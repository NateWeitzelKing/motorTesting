#ifndef _FOLLOW_H_
#define _FOLLOW_H_
#include "main.h"
#include "Chassis.h"
#include "API.h"
int targetDistance;
int rR, lL, cC;

void usFollow(){
  targetDistance = ultrasonicGet(sonar);
  printf("the distance to target is %d \n" , targetDistance);
  if (targetDistance > 20 && targetDistance < 30){
  chassisSet(60,60);
  }
  else if (targetDistance < 16){
  chassisSet(-60,-60);
  }
  else if((targetDistance > 50)||(targetDistance = -1)){
  chassisSet(-60,60);
  }
  else{
  chassisSet(0,0);
  }
}
void lineFollowing(){
  rR = analogReadCalibrated(2);
  lL = analogReadCalibrated(1);
  cC = analogReadCalibrated(3);

  printf("line tracker values are L %d R %d C %d \n", lL, rR, cC);
  if(cC > rR && cC > lL){
    chassisSet(60, 60);
  }
  else if(rR > cC && rR > lL){
    chassisSet(-60, 60);
  }
  else if (lL > cC && lL > rR){
    chassisSet(60, -60);
  }
  else {
    chassisSet(-60,-60);
  }
}

#endif
