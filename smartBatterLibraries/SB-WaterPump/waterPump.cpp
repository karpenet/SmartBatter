/*
 * waterPump.cpp
 *
 *  Created on: 11-May-2019
 *      Author: karpenet
 */

#include "waterPump.h"

waterPump::waterPump(uint8_t relayPin, uint8_t flowSensorPin) {

	pulseCount = 0;
	milliLitres = 0;

	_relayPin = relayPin;
	_flowSensorPin = flowSensorPin;

	pinMode(_relayPin, OUTPUT);
	pinMode(_flowSensorPin, INPUT_PULLUP);

	instance = this;
	digitalWrite(_relayPin, HIGH);
	attachInterrupt(digitalPinToInterrupt(_flowSensorPin), flowISR, RISING);
	sei();
}

waterPump::~waterPump() {
	// TODO Auto-generated destructor stub
}

void waterPump::startPump(){
	digitalWrite(_relayPin, LOW);
}

void waterPump::stopPump(){
	digitalWrite(_relayPin, HIGH);
}

void waterPump::measurePump(unsigned long volume){
	while(milliLitres < volume){

	    milliLitres = pulseCount*1000/(pumpCorrection * 60);
	    startPump();
	    Serial.println(milliLitres);

	    }

	    stopPump();
}

void waterPump::flow(){
	pulseCount++;
}

static void waterPump::flowISR(){
	instance ->flow();
}
