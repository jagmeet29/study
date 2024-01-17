const int speedPin=11;
const int dir1=12;
const int dir2=13;
const int speed=255;
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(speedPin,speed);
digitalWrite(dir2,HIGH);
digitalWrite(dir1,LOW);

}
