#include <Servo.h>

int JoyStick_X = 0; //x
int JoyStick_Y = 1; //y
int JoyStick_Z = 3; //joystick click
Servo myservo;

//NOTES:
//with pins facing upwards on  the joystick module:
/*
for maximum tilt:
first num: left/right. 1023 left, 0 right ~514 default
second num: up/down. 0 up. 1023 down ~512 default

*/

void setup() {
    pinMode(JoyStick_Z, INPUT); 
    myservo.attach(9);
}

void loop() {
    int x,y,z;
    x=analogRead(JoyStick_X);
    y=analogRead(JoyStick_Y);
    z=digitalRead(JoyStick_Z);
    delay(100);


    if (x > 550){
      myservo.write(180);

    }else if (x < 478){
      myservo.write(0);

    }else{
      myservo.write(90);

    }



}
