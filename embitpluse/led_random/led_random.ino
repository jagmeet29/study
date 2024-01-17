int LED[ ]={2,3,4,5,6,7,8,9};
void setup() {
    for (int i=0 ;i<8;i++){
      pinMode(LED[i],OUTPUT);
      }
  // put your setup code here, to run once:

}

void loop() {
  int i;
  int ran;
  ran=random(8);
  digitalWrite(LED[ran], HIGH);
delay(500);
for(i=0;i<8;i++)digitalWrite(LED[i], LOW);
}
