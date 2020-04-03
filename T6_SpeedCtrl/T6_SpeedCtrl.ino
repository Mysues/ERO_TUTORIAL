#include <ERO.h>

ERO BoBot(&RobotPin,&GamePad);

int robotSpeed;

void setup(){
    // Serial.begin(9600);
    BoBot.begin();
}

void loop(){
    robotSpeed = BoBot.speedCtrl();
    // Serial.print("Speed = ");
    // Serial.println(speed);
    BoBot.forward(robotSpeed);
}