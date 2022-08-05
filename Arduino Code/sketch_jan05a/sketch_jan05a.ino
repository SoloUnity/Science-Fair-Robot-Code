// motor one
int enA = 13;
int in1 = 12;
int in2 = 11;
int SPEED = 255;  

void setup(){
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  digitalWrite(in1,LOW);
  digitalWrite(in2, HIGH);
}

void loop(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, SPEED);
}
