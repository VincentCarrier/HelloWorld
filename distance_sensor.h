// distance_sensor.h

#ifndef _DISTANCE_SENSOR_h
#define _DISTANCE_SENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Distance_Sensor{
public:
	virtual int read_distance();
};



#endif

