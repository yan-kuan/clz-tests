#include <stdint.h>

/*It use the 4byte * 4*/

int clz( uint32_t x)
{
	int n = 32, c = 16;
	do{
		uint32_t y = x >> c;
		if( y) { n -= c; x = y;};
		c >>= 1;
	} while(c);

	return ( n - x);
}
