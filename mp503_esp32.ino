const int A = 4;
const int B = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A,INPUT);
  pinMode(B,INPUT); 
  Serial.println("sensor pre-heating");
  digitalWrite(B,HIGH);
  delay(60000) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(A)== LOW) && (digitalRead(B)== LOW)){
    Serial.println("Good");    
  }
  else if ((digitalRead(A)== LOW) && (digitalRead(B)== HIGH)){
    Serial.println("Slightly polluted");    
  }
  else if ((digitalRead(A)== HIGH) && (digitalRead(B)== LOW)){
    Serial.println("Noderate Pollution! WARNING!!");    
  }
  else if ((digitalRead(A)== HIGH) && (digitalRead(B)== HIGH)){
    Serial.println("Heavily polluted!!! evacuate!!");    
  }
  delay(20000);
}
