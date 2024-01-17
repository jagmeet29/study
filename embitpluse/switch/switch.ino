const int s=4;
const int led=2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(s,INPUT);
  // put your setup code here, to run once:

}

void loop() {
if (digitalRead(s)==1){
  digitalWrite(led,HIGH);
  }
 else{
  digitalWrite(led,LOW);
  }
}
