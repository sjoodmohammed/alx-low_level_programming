#include "main.h"

/**
* clear_bit - clear the bit at the endex.
* @n: the binary number as string
* @index: the bit to clear
* Return: the bit state or -1 on error.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
			return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
