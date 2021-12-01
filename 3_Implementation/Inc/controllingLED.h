#ifndef _controllingLED_H_
#define _controllingLED_H_

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

void controllingLED_on();
void controllingLED_off();

#endif
