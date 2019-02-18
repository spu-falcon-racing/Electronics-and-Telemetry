int lBkTire = 0; //Reading from linear potentiometer from left back tire
int lFtTire = 0; // " " " " " left front tire
int rBkTire = 0; // " " " " " right back tire
int rFtTire = 0; // " " " " " right front tire

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  lBkTire = analogRead(1);
  lFtTire = analogRead(2);
  rBkTire = analogRead(3);
  rFtTire = analogRead(4);
}
