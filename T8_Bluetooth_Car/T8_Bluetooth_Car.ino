#include <ERO.h>

ERO BoBot(&RobotPin, &GamePad);

int speed = 0; //from SpeedCtrl Tutorial

void setup(){
    Serial.begin(9600);
    BoBot.begin();
}

void loop(){
    speed = BoBot.speedCtrl(); //from SpeedCtrl Tutorial 
    if(BoBot.process()){
        if(GamePad.UP){
            BoBot.forward(80);
        }

        else if(GamePad.DOWN){
            BoBot.backward(80);
        }

        else if(GamePad.LEFT){
            BoBot.turnLeft(80);
        }

        else if(GamePad.RIGHT){
            BoBot.turnRight(80);
        }

        else if(GamePad.SQUARE){
            BoBot.leftSignal("ON");
        }

        else if(GamePad.CIRCLE){
            BoBot.leftSignal("OFF");
        }

        else if(GamePad.TRIANGLE){
            BoBot.beeper(1);
        }
        
    }
}