void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Simple calculation using functions");
int num1 = 20;
int num2;
num2 = 30;
Serial.println(do_a_CALC(num1,num2));
}

void loop() {
  // put your main code here, to run repeatedly:

}

int do_a_CALC(int num1,int num2) {
  int result = num1 + num2;
  return result;
}