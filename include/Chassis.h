
 #define _CHASSIS_H_
#include "API.h"

 void chassisSet(int left, int right){
motorSet(1, left);
motorSet(10, right);
 };
