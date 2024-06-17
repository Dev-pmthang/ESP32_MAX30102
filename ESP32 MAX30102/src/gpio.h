
#pragma once
#include "main.h"

#define LED_WIFI 23
#define BUTTON_CLEAR 0

void init_gpio(){
    pinMode(LED_WIFI,OUTPUT);
    pinMode(BUTTON_CLEAR,INPUT_PULLUP);
}