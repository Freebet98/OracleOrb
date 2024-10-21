#include "fortune_algorithm.h"
#include "fortunes.h"
#include <Arduino.h>

String runFortuneAlgorithm() {
    int randomIndex = random(0, NUMBER_OF_FORTUNES);
    return fortunes[randomIndex];
}