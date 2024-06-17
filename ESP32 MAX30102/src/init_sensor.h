
#pragma once
#include "main.h"

PulseOximeter pox;
uint32_t tsLastReport = 0;

void onBeatDetected(){
    Serial.println("Beat!");
}


void setup_sensor()
{
    pox.begin();
    pox.setOnBeatDetectedCallback(onBeatDetected);
}

void read_sensor()
{
    pox.update();
    Serial.print("Heart Rate:");
    Serial.print(pox.getHeartRate());
    Serial.print(" bpm/ SpO2: ");
    Serial.print(pox.getSpO2());
    Serial.print("%");
    delay(1000);

}