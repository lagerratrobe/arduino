/* Light stays on while button is pressed */

const int LED = 9;
const int BUTTON = 2;

void setup() {
  pinMode (LED, OUTPUT);
  pinMode (BUTTON, INPUT);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) { // BUTTON is LOW when not pressed
    digitalWrite(LED, LOW); // LED is LOW when off
  }
  else {
    digitalWrite(LED, HIGH);
  }
}
