

#include <Mouse.h>



int state = 0;
const int SWPin = 8;
const int YOYXPin = 0;
const int YOYYPin = 1;
const int ClickPin = 2;
int countdown = 0;

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  pinMode(SWPin, INPUT);
  pinMode(ClickPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int coords[] = {0,0};
  readJoystick(coords);
  bool clicked = readClick();
  Mouse.move(coords[0], coords[1], 0);
  if(clicked){
    Mouse.click();
  }
  delay(50);
}

void readJoystick(int coords[]){
  coords[0] = analogRead(YOYXPin)/4;//0-256
  coords[1] = analogRead(YOYYPin)/4;//0-256
}

bool readClick(){
  int Clickpinval = digitalRead(ClickPin);
  if(Clickpinval==HIGH){
    return false;
  }
  else{
    return true;
  }
}



