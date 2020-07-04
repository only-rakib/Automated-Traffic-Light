#define N1G 13
#define N1R 12
#define N1Y 2

#define S2G 3
#define S2R 4
#define S2Y 5

#define E1G 6
#define E1R 7
#define E1Y 8

#define W2G 9
#define W2R 10
#define W2Y 11

#define N A0
#define ledN 22
#define ledS 23
#define ledE 24
#define ledW 25

int a=0;

void setup() {
  Serial.begin(9600);
  pinMode(N1G ,OUTPUT);
  pinMode(N1R ,OUTPUT);
  pinMode(N1Y ,OUTPUT);

  pinMode(S2G ,OUTPUT);
  pinMode(S2R ,OUTPUT);
  pinMode(S2Y ,OUTPUT);
  
  pinMode(E1G ,OUTPUT);
  pinMode(E1R ,OUTPUT);
  pinMode(E1Y ,OUTPUT);
  
  pinMode(W2G ,OUTPUT);
  pinMode(W2R ,OUTPUT);
  pinMode(W2Y ,OUTPUT);

  digitalWrite(N1G,HIGH);
  digitalWrite(S2R,HIGH);
  digitalWrite(E1R,HIGH);
  digitalWrite(W2R,HIGH);
   

}

void loop() {
  if(digitalRead(N1G))
  {
    Serial.println("N1 Green");
    digitalWrite(S2R,HIGH);
    digitalWrite(E1R,HIGH);
    digitalWrite(W2R,HIGH);
    delay(5*1000);
        
    digitalWrite(N1G,LOW);
    digitalWrite(N1Y,HIGH);
    delay(3*1000);
    digitalWrite(N1Y,LOW);
    digitalWrite(N1R,HIGH);
    digitalWrite(W2R,LOW);
    digitalWrite(W2Y,HIGH);
    delay(3*1000);
    digitalWrite(W2Y,LOW);
    digitalWrite(W2G,HIGH);
    digitalWrite(W2R,LOW);
    
  }
  else if(digitalRead(W2G))
  {
  
    Serial.println("W2 Green");
    
    digitalWrite(S2R,HIGH);
    digitalWrite(E1R,HIGH);
    digitalWrite(N1R,HIGH);
    
    delay(5*1000);
        
    digitalWrite(W2G,LOW);
    digitalWrite(W2Y,HIGH);
    delay(3*1000);
    digitalWrite(W2Y,LOW);
    digitalWrite(W2R,HIGH);
    digitalWrite(S2R,LOW);
    digitalWrite(S2Y,HIGH);
    delay(3*1000);
    digitalWrite(S2Y,LOW);
    digitalWrite(S2G,HIGH);
    digitalWrite(S2R,LOW);
    
  }
  else if(digitalRead(S2G))
  {
    Serial.println("S2 Green");
    digitalWrite(W2R,HIGH);
    digitalWrite(E1R,HIGH);
    digitalWrite(N1R,HIGH);
    
    delay(5*1000);
        
    digitalWrite(S2G,LOW);
    digitalWrite(S2Y,HIGH);
    delay(3*1000);
    digitalWrite(S2Y,LOW);
    digitalWrite(S2R,HIGH);
    digitalWrite(E1R,LOW);
    digitalWrite(E1Y,HIGH);
    delay(3*1000);
    digitalWrite(E1Y,LOW);
    digitalWrite(E1G,HIGH);
    digitalWrite(E1R,LOW);
    
  }
  else if(digitalRead(E1G))
  {
    Serial.println("E1 Green");
    digitalWrite(W2R,HIGH);
    digitalWrite(S2R,HIGH);
    digitalWrite(N1R,HIGH);
    
    delay(5*1000);
        
    digitalWrite(E1G,LOW);
    digitalWrite(E1Y,HIGH);
    delay(3*1000);
    digitalWrite(E1Y,LOW);
    digitalWrite(E1R,HIGH);
    digitalWrite(N1R,LOW);
    digitalWrite(N1Y,HIGH);
    delay(3*1000);
    digitalWrite(N1Y,LOW);
    digitalWrite(N1G,HIGH);
    digitalWrite(N1R,LOW);
    
  }
  a=analogRead(N);
  Serial.println(a);
  if(a<150)
  {
    digitalWrite(ledN,HIGH);
    digitalWrite(ledS,HIGH);
    digitalWrite(ledE,HIGH);
    digitalWrite(ledW,HIGH);
  }
  else if(a>150)
  {
    digitalWrite(ledN,LOW);
    digitalWrite(ledS,LOW);
    digitalWrite(ledE,LOW);
    digitalWrite(ledW,LOW);
  }
}
