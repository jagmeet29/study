const int switchpin=4;
const int led=2;
const int gnd=3;
volatile int switchstate;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(gnd,OUTPUT);
  pinMode(switchpin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  switchstate=digitalRead(switchpin);
  digitalWrite(gnd,LOW);
  if (switchstate==LOW)
  {digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);}
  // put your main code here, to run repeatedly:

}
