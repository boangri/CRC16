/*
	CRC16.cpp - Library for computing CRC 
	Created by Boris A. Gribovskiy, January 6, 2015.
	Released into the public domain
*/
#include "Arduino.h"
#include "CRC16.h"

CRC16::CRC16()
{
}

unsigned short CRC16::crc(byte* data, unsigned short cnt)
{
	byte uchCRCHi = 0xFF;  /* high CRC byte initialized */
	byte uchCRCLo = 0xFF;  /* low CRC byte initialized  */ 
	unsigned uIndex;       /* will index into CRC lookup*/ 
						   /* table                  */ 
	while (cnt--)          /* pass through message buffer */ 
	{
		uIndex = uchCRCHi ^ *data++; /* calculate the CRC */ 
		uchCRCHi = uchCRCLo ^ auchCRCHi[uIndex];
		uchCRCLo = auchCRCLo[uIndex];
	}

	return (uchCRCLo << 8 | uchCRCHi);
}
