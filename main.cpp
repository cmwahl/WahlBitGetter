#include "WahlBitGetter.h"

using namespace std;

int main()
{

	unsigned char data[5] = { 170 , 170 , 170 , 170 , 170 };
	WahlBitGetter::BitGetter getter((void*)data, 5);

	for (int i = 0; i < 5 * 8; ++i) {
		cout << (short) getter.get();
	}
	cout << endl;
	
	getter.resetLoc();

	for (int i = 0; i < 5 * 8; ++i) {
		cout << (short)getter.get();
	}
	
	cout << endl;
	cout << "EOB: " << getter.EOB() << endl;
	cout << "get() again: " << (short)getter.get() << endl;

	return 0;
}
