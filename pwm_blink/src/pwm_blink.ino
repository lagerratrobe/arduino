/* GRADUALLY RAMP UP BRIGHTNESS OF LED USING PWM  */
 
int LED = 9;

void setup() {                
  pinMode(LED, OUTPUT); // setup led pin for output
} 

void loop() {
  for (int i=0; i<256; i++) {
    analogWrite(LED, i);
    delay(20);
  }
  for (int i=255; i>=0; i--) {
    analogWrite(LED, i);
    delay(20);
  }
}
