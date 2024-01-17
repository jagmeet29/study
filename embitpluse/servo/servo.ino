#include<Servo.h>
Servo myservo;
void setup() {
  myservo.attach(6);
  // put your setup code here, to run once:

}

void loop() {
  myservo.write(0);
  delay(1000);
  myservo.write(360);
  delay(400);
  // put your main code here, to run repeatedly:

}
