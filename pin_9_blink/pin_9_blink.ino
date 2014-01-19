/* Hacked up "blink LED" code.  Blinks an LED on pin 9 in 1 sec intervals */
 
int led = 9;

void setup() {                
  pinMode(led, OUTPUT); // setup led pin for output
} 

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
