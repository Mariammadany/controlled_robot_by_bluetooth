#define speedL 10
#define IN1 9
#define IN2 8 
#define IN3 7
#define IN4 6
#define speedR 5
#define A 2
#define B 3
#define C 4
#define D 11
#define E 12
#define F 13
char Reading;


void setup() {
  
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(F,OUTPUT);

  Serial.begin(9600);
  for(int i=5;i<=10;i++)
  {pinMode(i,OUTPUT);}

}


void forword(void){
  
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
analogWrite(speedL,120);
analogWrite(speedR,100);

}


void backword(void) {
  
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
analogWrite(speedL,120);
analogWrite(speedR,100);
  
}


void left(void) { 
  
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
analogWrite(speedL,0);
analogWrite(speedR,100);
  
}


void right(void) {
  
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
analogWrite(speedL,120);
analogWrite(speedR,0);
  
}


void stopp(void) {
  
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
analogWrite(speedL,0);
analogWrite(speedR,0);
  
}


void loop() {  
  
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
  
  if(Serial.available()>0){
     Reading=Serial.read();

switch(Reading){
  
case 'F': forword(); break;
case 'B': backword(); break;
case 'R': right(); break;
case 'L' : left(); break;
case 'S' :stopp(); break;

}
  }

}
