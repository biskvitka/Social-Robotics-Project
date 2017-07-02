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
  girar(2); 
  delay(5000); //1 sg 
  stop();
  delay(250); //250ms
//  
//
//  girar (2); 
//  delay(5000); //1 sg 
//  stop();
//  delay(250); //250ms
//  
//  girar (3); 
//  delay(5000); //1 sg 
//  stop();
//  delay(250); //250ms
  

//  girar (1); 
//  delay(5000); //1 sg 
//  stop();
//  delay(250); //250ms
  //  left();
  //  delay(50);
  //  right();
  //  delay(50);
}


void girar(int direccion)
{

  if(direccion == 1){
    ahead();
  } else if (direccion == 2) { 
    back();
  } else if (direccion == 3) {
    left();
  } else {
    right();
  }
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

void ahead(){
    boolean inPin1 = HIGH;
    boolean inPin2 = LOW;
  
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

void back() {
    boolean inPin1 = LOW;
    boolean inPin2 = HIGH;
  
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

void right(){
  boolean inPin1 = HIGH;
  boolean inPin2 = LOW;
  digitalWrite(AIA, inPin2);
  digitalWrite(AIB, inPin1);
  digitalWrite(CIA, inPin2);
  digitalWrite(CIB, inPin1);

    
  digitalWrite(BIA, inPin1);
  digitalWrite(BIB, inPin2);
  digitalWrite(DIA, inPin1);
  digitalWrite(DIB, inPin2);
}

void left(){
  boolean inPin1 = HIGH;
  boolean inPin2 = LOW;
  digitalWrite(AIA, inPin1);
  digitalWrite(AIB, inPin2);
  digitalWrite(CIA, inPin1);
  digitalWrite(CIB, inPin2);
  
  digitalWrite(BIA, inPin2);
  digitalWrite(BIB, inPin2);  
  digitalWrite(DIA, inPin2);
  digitalWrite(DIB, inPin2);
}
