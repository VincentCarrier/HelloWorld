// sensor.h

#ifndef _SENSOR_h
#define _SENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "sensor_initializer.h"
#include "SharpIR2.h"
#include "distance_sensor.h"


class Sensor_IR : public Distance_Sensor{
public:
	SharpIR2 sensor;
	Sensor_IR();
	int read_distance();
};

#endif


