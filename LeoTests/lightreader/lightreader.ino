int val = 0;
float volt = 0.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(0);
  volt = float(5 * val)/1024.0;
  Serial.println("Here comes the value:");
  Serial.println(volt);
  delay(500);
}
