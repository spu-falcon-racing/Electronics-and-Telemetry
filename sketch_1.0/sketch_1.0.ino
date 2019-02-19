float lBkTire = 0; //Reading from linear potentiometer from left back tire
float lFtTire = 0; // " " " " " left front tire
float rBkTire = 0; // " " " " " right back tire
float rFtTire = 0; // " " " " " right front tire
int lbInput=A0;
int lfInput=A1;
int rbInput=A2;
int rfInput=A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lBkTire = (0.0155 * analogRead(lbInput)) + 0.164; //*INCHES
  //lFtTire = analogRead(lfInput);
  //rBkTire = analogRead(rbInput);
  //rFtTire = analogRead(rfInput);
  Serial.println(lBkTire); 
  delay(100);
}
