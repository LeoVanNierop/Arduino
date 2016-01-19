static int laserpin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(laserpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laserpin, LOW);
  delay(2000);
  digitalWrite(laserpin, HIGH);
  delay(2000);
}
