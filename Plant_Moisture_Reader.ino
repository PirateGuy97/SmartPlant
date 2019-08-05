//Programming an Arduino board to read in soil moisture values and decide whether to turn the inbuilt LED on based on the recorded value
void setup() {
  //define the inbuilt LED as the output source
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //Read in soil moisture content value as data recorded from sensor connected to specified port
  int val;
  val = analogRead(0);
  //Turn on light if content value is below certain threshold
  //With sensor being used:
  //0-300 = dry soil
  //300-700 = moist soil
  //700-950 = underwater
  if (val < 300) {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  //Turn off light if content value is above given threshold
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);
}
