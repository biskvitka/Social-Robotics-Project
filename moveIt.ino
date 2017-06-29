const int AIA = 3;
const int AIB = 4;
const int BIA = 5;
const int BIB = 6;
const int CIA = 8;
const int CIB = 9;
const int DIA = 10;
const int DIB = 11;


void setup()
{
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
  pinMode(CIA, OUTPUT);
  pinMode(CIB, OUTPUT);
  pinMode(DIA, OUTPUT);
  pinMode(DIB, OUTPUT);
}

void loop(){
//  girar (1); 
//  delay(5000); //1 sg 
  
  stop();
  delay(250); //250ms
  
//  left();
//  delay(50);
//  right();
//  delay(50);
  girar (2); 
  delay(5000); //1 sg 
  
  stop();
  delay(250); //250ms
}


void girar(int direccion)
{
  boolean inPin1 = LOW;
  boolean inPin2 = HIGH;

  if(direccion == 1){
    inPin1 = HIGH;
    inPin2 = LOW;
  }
  digitalWrite(AIA, inPin1);
  digitalWrite(AIB, inPin2);
  digitalWrite(BIA, inPin1);
  digitalWrite(BIB, inPin2);

  delay(100);
  digitalWrite(CIA, inPin1);
  digitalWrite(CIB, inPin2);
  digitalWrite(DIA, inPin1);
  digitalWrite(DIB, inPin2);
}

void stop(){
  digitalWrite(AIA, LOW);
  digitalWrite(AIB, LOW);
  digitalWrite(BIA, LOW);
  digitalWrite(BIB, LOW);
  digitalWrite(CIA, LOW);
  digitalWrite(CIB, LOW);
  digitalWrite(DIA, LOW);
  digitalWrite(DIB, LOW);
}

void left (){
  boolean inPin1 = HIGH;
  boolean inPin2 = LOW;
  digitalWrite(AIA, inPin1);
  digitalWrite(AIB, inPin2);

    
  digitalWrite(BIA, inPin1);
  digitalWrite(BIB, inPin2);

  
  digitalWrite(CIA, inPin1);
  digitalWrite(CIB, inPin2);
  
  digitalWrite(DIA, inPin2);
  digitalWrite(DIB, inPin2);
}


void right (){
  boolean inPin1 = HIGH;
  boolean inPin2 = LOW;
  digitalWrite(AIA, inPin1);
  digitalWrite(AIB, inPin2);

    
  digitalWrite(BIA, inPin1);
  digitalWrite(BIB, inPin2);

  
  digitalWrite(CIA, inPin2);
  digitalWrite(CIB, inPin2);
  
  digitalWrite(DIA, inPin1);
  digitalWrite(DIB, inPin2);
}
