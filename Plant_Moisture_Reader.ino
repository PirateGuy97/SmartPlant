//Programming an Arduino board to read in soil moisture values and decide whether to turn the inbuilt LED on based on the recorded value
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //Read in soil moisture content value as data recorded from sensor connected to specified port
  int val;
  val = analogRead(0);
  //Illuminate light if content value is below certain threshold
  //With sensor being used:
  //0-300 = dry soil
  //300-700 = moist soil
  //700-950 = water
  if (val < 300) {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  //Extinguish light if content value is above given threshold
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);
}
