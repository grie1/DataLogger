/*
  mendel_sensor.h - a library for datalogging device
*/

#ifndef __mendel_sensor_H__
#define __mendel_sensor_H__

#include "Arduino.h"

class mendel_sensor {
    public:
      
      void setCO2(float);
      void setTempC(float);
      void setTempOffset(float);
      void setHumidity(float);
      void setPressure(float);
      
      float getCO2();
      float getTempC();
      float getTempF();
      float getTempOffset();
      float getHumidity();
      float getPressure();

    private:
      float _CO2;
      float _tempC;
      float _tempF;
      float _temp_offset;
      float _humidity;
      float _pressure;

      
};

#endif