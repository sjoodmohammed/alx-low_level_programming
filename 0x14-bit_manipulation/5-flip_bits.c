#include "main.h"

/**
* flip_bits - clear the bit at the endex.
* @n: the binary number as string
* @index: the bit to clear
* Return: the bit state or -1 on error.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;
	
	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
