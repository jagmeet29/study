int light;
const int led=2;
const int nown=A2;
void setup(){
  pinMode(A2,INPUT);
  pinMode(led,OUTPUT);
}

void loop(){
  light=analogRead(nown);

  if (light<20) digitalWrite(led,HIGH);

  if (light>60) digitalWrite(led,LOW);
}
