int pinVals[] = {0,0,0,0,0,0,0,0,0,0,0}; // 11 vals
int pinSelect = 0;

void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  pinSelect = random(11); //0-10
  pinVals[pinSelect] = (pinVals[pinSelect]+1)%2;
  digitalWrite(pinSelect+2, pinVals[pinSelect]);
  delay(200);
}
