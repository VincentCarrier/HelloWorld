#ifndef _SENSOR_INIT_H
#define _SENSOR_INIT_H


#include "distance_sensor.h"
#include "sensor_IR.h"
#include "Arduino.h"
#include "SharpIR2.h"
class Distance_Sensor;
class Sensor_IR;

void initialize_IR_sensor(Distance_Sensor** abstract_sensor);
#endif