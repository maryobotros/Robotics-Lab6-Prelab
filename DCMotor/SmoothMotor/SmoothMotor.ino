//This program will give soft start to motor and increase its speed
//from 0 to 90% in 10 sec in forward direction
//then it gives smooth stop from 90% to 0 in 5 sec
//again soft start from 0 to 50% in 6 sec in reverse direction
//and finally smooth stop from 50% to 0 in 3 sec.


#include<DC_Motor.h>
DC_Motor motor2(9, 10, 1);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor2.soft_start(1, 90, 10);
  delay(3000);
  motor2.smooth_stop(5);
  motor2.soft_start(0, 50, 6);
  delay(3000);
  motor2.smooth_stop(3);
}
