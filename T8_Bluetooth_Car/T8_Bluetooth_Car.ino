#include <ERO.h>

ERO BoBot(&RobotPin, &GamePad);

// int speedRobot = 0; //from SpeedCtrl Tutorial

void setup(){
    BoBot.begin();
}

void loop(){
    // speedRobot = BoBot.speedCtrl(); //from SpeedCtrl Tutorial 
    if(BoBot.Bluetooth.process()){
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

        else{
            BoBot.stop();
        }

        // else if(GamePad.SQUARE){
        //     BoBot.leftSignal("ON");
        //     BoBot.righSignal("ON");
        // }

        // else if(GamePad.CIRCLE){
        //     BoBot.leftSignal("OFF");
        //     BoBot.rightSignal("OFF");
        // }

        // else if(GamePad.TRIANGLE){
        //     BoBot.beeper(1);
        // }
        
    }
}