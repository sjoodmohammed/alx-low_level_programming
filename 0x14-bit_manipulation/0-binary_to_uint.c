#include "main.h"

/**
* binary_to_uint - convert binary to unsigned int.
* @b: the binary number as string
*
* Return: the unsigned int.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
