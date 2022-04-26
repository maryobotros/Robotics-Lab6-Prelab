//This program will rotate DC motor forward for 5 sec
//then stop for 2 sec and again rotate motor reverse for
//5 sec, stop for 2 sec continuously. 


#include<DC_Motor.h>

DC_Motormotor(8, 12);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor.forward();
  delay(5000);
  motor.stop_motor();
  delay(2000);
  motor.reverse();
  delay(5000);
  motor.stop_motor();
  delay(2000);
}
