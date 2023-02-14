// #define motor_pin 10
 
#include <Servo.h>
Servo servo;

void setup() {
  // pinMode(motor_pin, OUTPUT);
  servo.attach(9);
  // put your setup code here, to run once:

}

void loop() {
  // for(int velocity=0; velocity<=255; velocity++){
  //   analogWrite(motor_pin, velocity);
  //   delay(10);
  // }
  for (int pos=0; pos <= 100; pos++){
    servo.write(pos);
    delay(10);
  }
  for (int pos=180; pos >= 100; pos--){
    servo.write(pos);
    delay(10);
  }
  // put your main code here, to run repeatedly:

}
