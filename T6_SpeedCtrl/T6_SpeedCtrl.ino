#include <ERO.h>

ERO BoBot(&RobotPin,&GamePad);

int speed;

void setup(){
    // Serial.begin(9600);
    BoBot.begin();
}

void loop(){
    speed = BoBot.speedCtrl();
    // Serial.print("Speed = ");
    // Serial.println(speed);
    BoBot.forward(speed);
}