/*
  Ultrasonic.h - Library for Ultrasonic HC_SR04 code.
  Created by Apiruk Sang-ngenchai, November 15, 2014.
  Released into the public domain.
*/

#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic
{
	public:
		Ultrasonic(int trigpin, int echopin);
		long reading();
		
	private:
		int _trigPin;
		int _echoPin;
		long _duration;
		long _distance;
};


#endif