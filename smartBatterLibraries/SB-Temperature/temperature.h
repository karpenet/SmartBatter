/*
 * temperature.h
 *
 *  Created on: 11-May-2019
 *      Author: karpenet
 */

#include <DallasTemperature.h>
#include <OneWire.h>

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

class temperature {
public:
	temperature();
	virtual ~temperature();

public:
	int getTemperature(uint8_t index);

};

#endif /* TEMPERATURE_H_ */
