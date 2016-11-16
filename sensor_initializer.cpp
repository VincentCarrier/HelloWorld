#include "sensor_initializer.h"

void initialize_IR_sensor(Distance_Sensor** abstract_sensor){
	delete *abstract_sensor;
	*abstract_sensor = new Sensor_IR;
}





