/*
 * temperature.cpp
 *
 *  Created on: 11-May-2019
 *      Author: karpenet
 */

#include "temperature.h"

temperature::temperature() {
	sensors.begin();
}

temperature::~temperature() {
	// TODO Auto-generated destructor stub
}

int temperature::getTemperature(uint8_t index){
	sensors.requestTemperatures();
	return sensors.getTempCByIndex(index);
}
