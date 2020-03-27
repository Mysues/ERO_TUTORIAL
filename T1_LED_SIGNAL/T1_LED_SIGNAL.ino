#include <ERO.h>

ERO BoBot(RobotPin);

void setup(){
    BoBot.begin();
}

void loop(){
    BoBot.leftSignal("ON");
    BoBot.rightSignal("ON");

    delay(1000);

    BoBot.leftSignal("OFF");
    BoBot.rightSignal("OFF");

    delay(1000);
}