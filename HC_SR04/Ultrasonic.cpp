/*
  Ultrasonic.cpp - Library for Ultrasonic HC_SR04 code.
  Created by Apiruk Sang-ngenchai, November 15, 2014.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trigpin, int echopin)
{
	pinMode(trigpin, OUTPUT);
	_trigPin = trigpin;
	
	pinMode(echopin, OUTPUT);
	_echoPin = echopin;
}

long Ultrasonic::check() {
	trig();
	echo();
	return _distance;
}

void Ultrasonic::trig()
{
  digitalWrite(_trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
}

void Ultrasonic::echo()
{
  _duration = pulseIn(_echoPin, HIGH);
  _distance = (_duration/2) / 29.1;
}

