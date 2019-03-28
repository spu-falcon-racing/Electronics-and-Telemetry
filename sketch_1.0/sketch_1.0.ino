

/* FreqMeasure - Example with serial output
 * http://www.pjrc.com/teensy/td_libs_FreqMeasure.html
 *
 * This example code is in the public domain.
 */
#include <FreqMeasure.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>


float lBkTire = 0; //Reading from linear potentiometer from left back tire
float lFtTire = 0; // " " " " " left front tire
float rBkTire = 0; // " " " " " right back tire
float rFtTire = 0; // " " " " " right front tire
//Linear Pot Inputs
int lbInput=A0; 
int lfInput=A1;
int rbInput=A2;
int rfInput=A3;

 void setup() {
  Serial.begin(9600);
  FreqMeasure.begin();
}

 double sum=0;
int count=0;
const float Pi = 3.14159;

 void loop() {

 ////////////////////
///Rotary Encoder///
///////////////////
//  if (FreqMeasure.available()) {
//    // average several reading together
//    sum = sum + FreqMeasure.read();
//    count = count + 1;
//    if (count > 30) {
//      float frequency = FreqMeasure.countToFrequency(sum / count);
//      Serial.println((frequency/12000)*60); //Outputs rotations/minute
//      sum = 0;
//      count = 0;
//    }
//  }
////////////////////
///  POT READ   ///
///////////////////
  lBkTire = (0.0155 * analogRead(lbInput)) + 0.164; //*INCHES
  lFtTire = (0.0155 * analogRead(lfInput)) + 0.164; //*INCHES
  rBkTire = (0.0155 * analogRead(rbInput)) + 0.164; //*INCHES
  rFtTire = (0.0155 * analogRead(rfInput)) + 0.164; //*INCHES
  Serial.println(lBkTire); 
  Serial.println(lFtTire); 
  Serial.println(rBkTire); 
  Serial.println(rFtTire); 
  //delay(200);


}
