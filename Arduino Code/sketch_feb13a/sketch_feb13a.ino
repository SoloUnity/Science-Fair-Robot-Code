// motor one
int enA = 13;
int in1 = 12;
int in2 = 11;
// motor two
int enB = 8;
int in3 = 10;
int in4 = 9;
//motor three
int enAa = 7;
int in1a = 6;
int in2a = 5;
// speed
int SPEED = 0;  
int SPEEDa = 0;

void setup(){
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(enAa, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in1a, OUTPUT);
  pinMode(in2a, OUTPUT);

  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4, LOW);
}

void loop(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, SPEED);
  analogWrite(enB, 50);
  analogWrite(enAa, SPEEDa);
}
