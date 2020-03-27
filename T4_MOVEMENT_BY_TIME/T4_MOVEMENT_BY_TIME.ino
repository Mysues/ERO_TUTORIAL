#include <ERO.h>

ERO BoBot(RobotPin);

void setup(){
    BoBot.begin();
}

void loop(){
    BoBot.forward(80,1000);
    BoBot.backward(80,1000);
    BoBot.turnLeft(80,1000);
    BoBot.turnRight(80,1000);
}