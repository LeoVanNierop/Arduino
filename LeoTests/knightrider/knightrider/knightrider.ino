int timedelay = 70;
bool increase = true;
int onlight = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(onlight, LOW);
  if (increase)
  {
    onlight += 1;
    if (onlight == 10)
    {
      increase = false;
    }  
  }
  else
  {
    onlight -= 1;
    if (onlight == 3)
    {
      increase = true;
    }
  }
  digitalWrite(onlight, HIGH);
  delay(timedelay);

}
