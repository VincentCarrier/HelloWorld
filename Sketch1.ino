/*
 Name:		Sketch1.ino
 Created:	11/5/2016 8:55:54 AM
 Author:	Vincent
*/
#include "distance_sensor.h"
#include "sensor_IR.h"
#include "Arduino.h"
#include "SharpIR2.h"
#include "sensor_initializer.h"

Distance_Sensor *sensor = new Distance_Sensor;

void setup() {
    initialize_IR_sensor(&sensor);
    Serial.begin(9600);
}

void loop() {
	Serial.print("la distance est: ");
	int d = sensor->read_distance();
	Serial.print(d);
	Serial.print("\n");

}