#ifndef LF1402_H
#define LF1402_H

class TSLXX ;

class LF1402 : public TSLXX
{
public:
		LF1402(uint8_t clkPin, uint8_t siPin, uint8_t analogPin);

		static volatile uint8_t pixels[ 256 ];
		static uint8_t pixelBuffer[ 256 ]; 

		const int L_ARRAY = 256;
		const int L_ARRAY_1 = 257;

};

	volatile uint8_t LF1402::pixels[ 256 ] = {0};
	uint8_t LF1402::pixelBuffer[ 256 ] = {0}; 

LF1402::LF1402(uint8_t clkPin, uint8_t siPin, uint8_t analogPin) {
	TSLXX TSL;
	TSL.init(clkPin, siPin, analogPin);
	TSL.pixelBuffer = pixelBuffer;
	TSL.pixels = pixels;
	TSL._L_ARRAY = L_ARRAY;
    TSL._L_ARRAY_1 = L_ARRAY_1;
}

#endif // LF1402_H
