#include <ERO.h>

ERO BoBot(&RobotPin,&GamePad);

void setup(){
    BoBot.begin();
}

void loop(){
    BoBot.beeper(1);
    delay(2000);
}