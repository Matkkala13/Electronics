const int ledPin = 7;
const int totalStates = 10;
int ledStates[] = {1,0,1,0,1,0,0,1,0};
int ledDuration[] = {200,400,500,100,200,50,50,500,500};
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<totalStates;i++)
  {
    digitalWrite(ledPin,ledStates[i]);
    delay(ledDuration[i]);
  }
}
