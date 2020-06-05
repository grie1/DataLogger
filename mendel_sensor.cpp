/*
  mendel_sensor.cpp - a library for datalogging device
*/

#include "Arduino.h"
#include "mendel_sensor.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

void mendel_sensor::setCO2( float CO2 ) {
    _CO2 = CO2;
}

float mendel_sensor::getCO2() {
    return _CO2;
}
void mendel_sensor::setTempC( float temp ) {
    _tempC = temp;

    if ( _tempC >= 0.00 ) {
        _tempF = _tempC * 9 / 5 + 32;
    }
    else {
        _tempF = -1.00;
    }
    
}

float mendel_sensor::getTempC() {
    return _tempC;
}

float mendel_sensor::getTempF() {
    return _tempF;
}

void mendel_sensor::setHumidity( float humidity ) {
    _humidity = humidity;
}

float mendel_sensor::getHumidity() {
    return _humidity;
}

void mendel_sensor::setPressure( float pressure ) {
    _pressure = pressure;
}

float mendel_sensor::getPressure() {
    return _pressure;
}

void mendel_sensor::setTempOffset( float temp_offset ) {
    _temp_offset = temp_offset;
}

float mendel_sensor::getTempOffset() {
    return _temp_offset;
}