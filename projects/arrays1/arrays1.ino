int integers[] = {
  1,
  2,
  3,
  4,
  5

};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
  Serial.println("Your array numbers:");


  for (int i=0; i <5;i++)
  {
    Serial.print("Index ");
    Serial.print(i);
    Serial.print(" contains value ");
    Serial.println(integers[i]);
  };

  Serial.println("Lets do some calculations:");

  for (int i=0; i <4;i++)
  {
    Serial.print(integers[i]);
    Serial.print(" + ");
    Serial.print(integers[i+1]);
    Serial.print(" = ");
    Serial.println(integers[i] + integers[i+1]);
  };

  Serial.println("Lets do some calculations, and store the results:");

  for (int i=0; i <4;i++)
  {
    Serial.print(integers[i]);
    Serial.print(" + ");
    Serial.print(integers[i+1]);
    Serial.print(" = ");
    int sum = integers[i] + integers[i+1];
    integers[i] = sum;
    Serial.print(integers[i]);
    Serial.print(" -> Index ");
    Serial.print(i);
    Serial.print(" now contains value ");
    Serial.println(integers[i]);
  };

}
void loop() {
  // put your main code here, to run repeatedly:

}
