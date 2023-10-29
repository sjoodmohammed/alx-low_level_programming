#include "main.h"

/**
* _puts - prints a string, followed by a new line.
* @str: Pointer to the string.
* Return: String and new line.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
