#include <ERO.h>

ERO BoBot(&RobotPin, &GamePad);

void setup(){
    Serial.begin(9600);
    BoBot.begin();
}

void loop(){
    if(BoBot.Bluetooth.process()){
        // GamePad.print();
        if(GamePad.UP){
            Serial.println("UP is pressed");
        }

        else if(GamePad.DOWN){
            Serial.println("DOWN is pressed");
        }

        else if(GamePad.LEFT){
            Serial.println("LEFT is pressed");
        }

        else if(GamePad.RIGHT){
            Serial.println("RIGHT is pressed");
        }
    }
}