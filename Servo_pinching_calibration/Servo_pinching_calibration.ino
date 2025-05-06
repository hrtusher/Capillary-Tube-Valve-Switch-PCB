#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
boolean purification=0;
int initAngle = 96;

void setup() {
  // put your setup code here, to run once:
s1.attach(3);
s2.attach(9);
s3.attach(10);
s4.attach(11);
s1.write(initAngle);
s2.write(initAngle);
s3.write(initAngle);
s4.write(initAngle);
}

void loop() {
while (analogRead(A1)<251){ //Loop until triggered
  digitalWrite(13, LOW);
}
digitalWrite(13, LOW);
purification=!purification;
if (purification){
  s1.write(75); //Move servo s4 to 75 degree
  s2.write(118);  //Move servo s2 to 118 degree
  delay(1000);   //Pausing time, ms
  s3.write(120);  //Move servo s1 to 120 degree
  s4.write(80); //Move servo s3 to 80 degree
} else {
  s1.write(118); //Move servo s4 to 118 degree
  s2.write(75);  //Move servo s2 to 75 degree
  delay(1000);   //Pausing time, ms
  s3.write(82);  //Move servo s1 to 82 degree
  s4.write(120); //Move servo s3 to 120 degree
}

// delay(1000); //Delay to avoid cycling multiple times on one trigger. Shorten if needed
//   increase angle is cc, decrease is c.
}
