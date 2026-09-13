void setup() {
  // put your setup coDEe here, to run once:
  pinMode(8, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<3; i++){
    digitalWrite(8,HIGH);
    delay(200);
    digitalWrite(8,LOW);
    delay(200);
  }
  for (int i=0; i<3; i++){
    digitalWrite(8,HIGH);
    delay(1000);
    digitalWrite(8,LOW);
    delay(1000);
  }
}
