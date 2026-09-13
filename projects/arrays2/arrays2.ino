char my_char[] = {'a','b','c','d','e'};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Your array char:");
  for (int i=0; i<5; i++ ){
    Serial.print("Index ");
    Serial.print(i);
    Serial.print(" contains char '");
    Serial.print(my_char[i]);
    Serial.print("', ASCII decimal ");
    Serial.println(my_char[i], DEC);
  }

  Serial.println();
  Serial.println("Let's do some calculations, and store the values:");
  for(int i=0; i<4;i++)
  {
    Serial.print(my_char[i]);
    Serial.print(" + ");
    Serial.print(my_char[i+1]);
    Serial.print(" = ");
    Serial.println(my_char[i] + my_char[i+1]);
  } 

  Serial.println();
  Serial.println("Let's do some calculations, and store the values:");
  for(int i=0; i<4;i++)
  {
    Serial.print(my_char[i]);
    Serial.print(" + ");
    Serial.print(my_char[i+1]);
    Serial.print(" = ");

    char sum = my_char[i] + my_char[i+1];
    my_char[i] = sum;
    Serial.print(my_char[i], DEC);
    Serial.print(" -> Index ");
    Serial.print(i);
    Serial.print(" now contains value '");
    Serial.println(my_char[i], DEC);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
