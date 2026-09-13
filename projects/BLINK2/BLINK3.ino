int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(3);
  if (buttonState == HIGH){
    digitalWrite(2,HIGH);
    Serial.println("HIGH");
  } else {
    digitalWrite(2,LOW);
    Serial.println("LOW");
  }
}