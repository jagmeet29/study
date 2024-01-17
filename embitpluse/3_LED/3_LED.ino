const int red=2;
const int green=3;
const int blue=4;
void setup() {
  pinMode(red,OUTPUT);
   pinMode(blue,OUTPUT);
    pinMode(green,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int no;
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);

  random(3)=no;

  switch (no){
    case 1:
    digitalWrite(red,LOW);
    break;
    case 2:
    digitalWrite(green,LOW);
    break;
    case 3:
    digitalWrite(blue,LOW);
    break;
    }
  // put your main code here, to run repeatedly:

}
