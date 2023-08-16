#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: the number to be checked
 * Return: 1 for positive, -1 for negative, 0 for any thing else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
        return (-1);
	}
	else
	{
	_putchar(48);
        return (0);
	}
}

