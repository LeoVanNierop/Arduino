int state = 0;
const int SWPin = 8;
const int YOYXPin = 0;
const int YOYYPin = 1;
int countdown = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SWPin, INPUT);
  digitalWrite(13, LOW);
  attachInterrupt(digitalPinToInterrupt(2), sendJoystickPosition, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1);
  if(countdown > 0){
    countdown--;
  }
}

void sendJoystickPosition(){
  if(countdown == 0){
    bool pressed = digitalRead(SWPin);
    float x = analogRead(YOYXPin);
    float y = analogRead(YOYYPin);
    Serial.print("x: ");
    Serial.print(x);
    Serial.print(", y: ");
    Serial.print(y);
    Serial.print(", pressed: ");
    Serial.println(pressed);
  }
  else{
    countdown += 5;
  }
}


