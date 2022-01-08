// WahlBitGetter.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class WahlBitGetter {
public:
	WahlBitGetter(void* _data, unsigned int _N);

	char get();

	bool setByteLoc(unsigned int loc);
	bool setBitLoc(unsigned char loc);

	unsigned int getByteLoc();
	unsigned char getBitLoc();

	bool EOB(); // End of Bits
	void resetLoc();

	void newData(void* _data, unsigned int _N);

private:
	unsigned char* data = nullptr;
	unsigned int N = 0;
	unsigned int byteLoc = 0;
	unsigned char bitLoc = 0;
	unsigned char currentByte = 0;

};
