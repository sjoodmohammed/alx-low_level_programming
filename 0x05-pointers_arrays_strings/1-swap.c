#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: Swab and store a value.
* @b: Swab and store b value.
* Return: always 0.
*/

void swap_int(int *a, int *b)
{
	 int change;

	change = *b;
	*b = *a;
	*a = change;
}
