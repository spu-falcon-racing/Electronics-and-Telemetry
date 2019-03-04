/* FreqMeasure - Example with serial output
 * http://www.pjrc.com/teensy/td_libs_FreqMeasure.html
 *
 * This example code is in the public domain.
 */
#include <FreqMeasure.h>

void setup() {
  Serial.begin(9600);
  FreqMeasure.begin();
}

double sum=0;
int count=0;
const float Pi = 3.14159;

void loop() {
  if (FreqMeasure.available()) {
    // average several reading together
    sum = sum + FreqMeasure.read();
    count = count + 1;
    if (count > 30) {
      float frequency = FreqMeasure.countToFrequency(sum / count);
      Serial.println((frequency/12000)*60); //Outputs rotations/minute
      sum = 0;
      count = 0;
    }
  }
}
