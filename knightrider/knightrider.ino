void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=2; i<13; i++){
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }
  for(int i=12; i>1; i--){
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }
}
