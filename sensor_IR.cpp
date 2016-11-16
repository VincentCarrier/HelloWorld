// 
// 
// 

#include "sensor_IR.h"
#include "SharpIR2.h"

Sensor_IR::Sensor_IR() :
sensor(A0, 20, 30, 20150)
{};

int Sensor_IR::read_distance(){
	sensor.distance();

};