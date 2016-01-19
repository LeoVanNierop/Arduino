void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int set;
  for(int i=0; i<2048; i++){
    delay(50);
    for(int j=2; j<13; j++){
      set = i >> (j-2);
      digitalWrite(j, set%2);
    }
  }
}
