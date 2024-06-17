
#pragma once

#include <Arduino.h>
#include <Wire.h>
#include "gpio.h"
#include "MAX30100_PulseOximeter.h"
#include "init_sensor.h"
#include "WiFiManager.h"
#include "WiFi_Custom.h"
#include "FirebaseClient.h"
#include "Firebase_Custom.h"

void init_setup()
{
    Serial.begin(115200);
    init_gpio();
    init_wifi();
    setup_sensor();
    // init_wifi();
    // FireBase_Init();
}