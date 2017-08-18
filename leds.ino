// Project: LED Loop
// Description: This program will loop through 4 LEDs on a test board.

int leds[4] = { 13, 12, 11, 10 } ;
int ground = 8;
int led = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  for (led=0; led < 4; led++) {
    pinMode(leds[led], OUTPUT);
  }
  
  pinMode(ground, OUTPUT);
  digitalWrite(ground, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  int i = 0;
  for (i=0; i < 4; i++) {
    led = leds[i];
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);               // wait for a second
  }
}

//This is a comment
