#include "main.h"

/**
* _strlen - check string.
* @s: string to be checked.
* Return: The length of string..
*/

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
