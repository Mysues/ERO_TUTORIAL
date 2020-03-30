#include <ERO.h>

ERO BoBot(&RobotPin,&GamePad);

void setup(){
    BoBot.begin();
}

void loop(){
    BoBot.forward(80);
    delay(1000);

    BoBot.stop();
    delay(1000);

    BoBot.backward(80);
    delay(1000);

    BoBot.stop();
    delay(1000);

    BoBot.taskFinish();
}