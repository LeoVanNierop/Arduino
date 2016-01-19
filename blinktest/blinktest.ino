int potpin = 2;
int ledpin = 7;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potpin);
  digitalWrite(7, HIGH);
  delay(val);
  digitalWrite(7, LOW);
  delay(val);
}
