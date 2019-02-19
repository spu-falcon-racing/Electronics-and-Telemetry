int lBkTire = 0; //Reading from linear potentiometer from left back tire
int lFtTire = 0; // " " " " " left front tire
int rBkTire = 0; // " " " " " right back tire
int rFtTire = 0; // " " " " " right front tire
int input=A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lBkTire = analogRead(input);
  //lFtTire = analogRead(2);
  //rBkTire = analogRead(3);
  //rFtTire = analogRead(4);
  Serial.println(lBkTire); 
  delay(100);
}
