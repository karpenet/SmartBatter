/*
 * waterPump.h
 *
 *  Created on: 11-May-2019
 *      Author: karpenet
 */

#include <Arduino.h>

#define pumpCorrection 7.5

#ifndef WATERPUMP_H_
#define WATERPUMP_H_

class waterPump {
public:
	waterPump(uint8_t pumpRelay, uint8_t flowSensor);
	virtual ~waterPump();

public:
	void startPump();
	void stopPump();
	void measurePump(unsigned long volume);

	static void flowISR();
	void flow();

public:
	unsigned long pulseCount;
	unsigned long milliLitres;

	static waterPump *instance;

private:
	uint8_t _relayPin;
	uint8_t _flowSensorPin;
};

#endif /* WATERPUMP_H_ */
