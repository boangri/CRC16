/*
	CRC16.h - Library for computing 16-bit CRC with 0x0A001 polynom
	Created by Boris A. Gribovskiy, January 6, 2015.
	Released into the public domain
*/
#ifndef CRC16_H
#define CRC16_H

#include "Arduino.h"

class CRC16
{
    public:
		CRC16(int pin);
		unsigned short crc(byte* data, unsigned short cnt);
    private:
		int _pin;

};

#endif
