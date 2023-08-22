#include "main.h"

/**
* print_rev - prints a reverse string, followed by a new line.
* @s: Pointer to the string.
* Return: 0.
*/

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
