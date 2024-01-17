int LED[ ]={2,3,4
};
void setup() {
    for (int i=0 ;i<8;i++){
      pinMode(LED[i],OUTPUT);}
}
void loop() {
  // put your main code here, to run repeatedly:
int i;
  int ran;
  ran=random(3);
  digitalWrite(LED[ran], HIGH);
delay(500);
for(i=0;i<3;i++)digitalWrite(LED[i], LOW);
}
