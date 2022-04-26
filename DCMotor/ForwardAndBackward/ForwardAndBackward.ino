//This program will rotate DC motor forward for 5 sec
//at 40%speed then stop for 2 sec and again rotate motor reverse for
//5 sec at 80% speed continuously.


#include<DC_Motor.h>
DC_Motor motor2(9, 10, 1);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor2.set_speed(40);
  motor2.forward_with_set_speed();
  delay(5000);
  motor2.motor_speed_zero();
  delay(2000);
  motor2.set_speed(80);
  motor2.reverse_with_set_speed();
  delay(5000);
  motor2.motor_speed_zero();
  delay(2000);
}
