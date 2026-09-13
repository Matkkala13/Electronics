const int ledPin = 7;
const int totalStates = 10;
int ledStates[] = {1,0,1,0,1,0,0,1,0};
int ledDuration[] = {200,400,500,100,200,50,50,500,500};

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  while (!Serial){
    ;

  }
  for (int i=0;i<totalStates; i++){
    Serial.print("Please type 1 or 0 for pattern step ");
    Serial.print(i);
    Serial.print(" out of ");
    Serial.print(totalStates - 1);
    Serial.print(" (default is 1): ");
  
  while (Serial.available()==0)
  {

  }
  char userInput= Serial.read();
  if (userInput=='1')
    ledStates[i]= 1;
  else if (userInput=='0')
    ledStates[i]= 0;
  else 
    ledStates[i]= 1;

  Serial.println(ledStates[i]);
  }


  
  for (int i=0;i<totalStates; i++){
    Serial.print("Please type 1 or 0 for pattern step ");
    Serial.print(i);
    Serial.print(" out of ");
    Serial.print(totalStates - 1);
    Serial.print(" (default is 1): ");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i< totalStates;i++){
    digitalWrite(ledPin,ledStates[i]);
    delay(ledDuration[i]);
  }

  }

