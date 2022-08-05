//avoid pins
int LED = 13; // Arduino LED
int isObstaclePin = 2;  // pin
int isObstacle = HIGH;  // no obstacle

//etc
int pot = A0;
int potVal = 0;

// motor one
int enA = 13;
int in1 = 12;
int in2 = 11;

// motor two
int enB = 8;
int in3 = 10;
int in4 = 9;

//motor three
int enC = 7;
int in1C = 6;
int in2C = 5;

// speed
int SPEED = 0;
int SPEEDC = 0;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);  
  
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(enC, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in1C, OUTPUT);
  pinMode(in1C, OUTPUT);

  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in1C,LOW);
  digitalWrite(in2C, HIGH);

}

void loop(){
/*  digitalWrite(in1C,LOW);
  digitalWrite(in2C, HIGH);
  analogWrite(enA, SPEED);
  analogWrite(enB, SPEED);
  analogWrite(enC, SPEEDC);
  delay(2000);
  digitalWrite(in1C, LOW);
  digitalWrite(in2C, HIGH);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  analogWrite(enC, SPEEDC);
  delay(2000); 
*/

 int x = 0;
  
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == LOW)
  {x = 1;
  }

  if (x == 1)
  {
    Serial.println("OBSTACLE!!, GO AROUND!!!!");
    digitalWrite(LED, HIGH);


    digitalWrite(in1,LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enA, 255);
    analogWrite(enB, 255);
    delay(1000);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 

    digitalWrite(in1,HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enA, 255);
    analogWrite(enB, 255);
    delay(330); 
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 

    digitalWrite(in1,HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, 255);
    analogWrite(enB, 255);
    delay(1700);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 

    digitalWrite(in1,LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, 255);
    analogWrite(enB, 255);
    delay(330); 
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    delay(500); 
    x = 0;
  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED, LOW);
  }
  delay(200);

}
