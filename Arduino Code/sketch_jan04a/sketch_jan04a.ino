// DC motor 1 control
#define P1A 2 // define pin 2 as for P1A
#define P2A 7 // define pin 7 as for P2A
#define EN12 8 // define pin 8 as for 1,2EN enable



// DC motor 2 control 
#define P3A 10 // define pin 10 as for P3A
#define P4A 13 // define pin 13 as for P4A
#define EN34 9 // define pin 9 as for EN3 and EN4 enable

/*
 * Permission granted to share this code given that this
 * note is kept with the code.
 * Disclaimer: this code is "AS IS" and for educational purpose only.
 * 
 */

void setup() {
  // L293 Motor Control Code by Robojax.com 2018025
  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(P1A, OUTPUT);// define pin as OUTPUT for P1A
  pinMode(P2A, OUTPUT);// define pin as OUTPUT for P2A
  pinMode(EN12, OUTPUT);// define pin as OUTPUT for 1,2EN
   
  pinMode(P3A, OUTPUT);// define pin as OUTPUT for P3A
  pinMode(P4A, OUTPUT);// define pin as OUTPUT for P4A
  pinMode(EN34, OUTPUT);// define pin as OUTPUT for 3,4EN   
  // L293 Motor Control Code by Robojax.com 2018025   
}

void loop() {
  // L293 Motor Control Code by Robojax.com 2018025


    Serial.println(" Rotating CW");
    digitalWrite(EN12 ,HIGH);// Enable 1A and 2A 
    digitalWrite(P1A,HIGH);// send + or HIGH singal to P1A
    digitalWrite(P2A,LOW);// send - or LOW singal to P2A       
    delay(3000);// motor runs for 3 seconds
    digitalWrite(EN12 ,LOW);// Disable 1A and 2A
    delay(2000);// motor stop for 3 seconds 
    Serial.println(" Motor Stopped"); 

  // L293 Motor Control Code by Robojax.com 2018025
    // now changing the direction of rotation of motor
    Serial.println(" Rotating CCW");
    digitalWrite(EN12 ,HIGH);// Enable 1A and 2A     
    digitalWrite(P1A,LOW);// send + or HIGH singal to P1A
    digitalWrite(P2A,HIGH);// send - or LOW singal to P2A  
    delay(3000);// motor runs for 3 seconds
    digitalWrite(EN12 ,LOW);// Disable 1A and 2A
    delay(2000);// motor stop for 3 seconds    
    Serial.println(" Motor Stopped");   
     

  Serial.println("=========== Loop done"); 
  delay(500);
  // L293 Motor Control Code by Robojax.com 2018025 
}
