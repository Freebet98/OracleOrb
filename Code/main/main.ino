#include "fortune_algorithm.h"
#include "mechanical_actions.h"
#include "fortunes.h"

// setup() runs once when the Arduino is powered on or reset
void setup() {
    initializeMechanicalActions();
}

// loop() runs repeatedly after setup is done
void loop() {
    // Check if the button is pushed
    if (isButtonPressed()) {
        moveRobot();
        String fortune = runFortuneAlgorithm();

        if(moveRobot() == true){
            displayFortune(fortune);
        }
    } else {
        // If button is not pressed, keep the default behavior
        startLEDCircling();
        turnOffLCD();
    }
}
