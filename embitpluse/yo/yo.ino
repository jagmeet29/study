int man;
int manyo=A3;
void setup() {
  Serial.begin(9600);
  pinMode(A3,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  man=analogRead(manyo);
  Serial.println(man);
  delay(100);
  // put your main code here, to run repeatedly:

}
