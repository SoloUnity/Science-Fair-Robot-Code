int LED = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED, OUTPUT); //set the LED pin as OUTPUT
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   
}
