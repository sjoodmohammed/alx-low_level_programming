#include "main.h"

/**
*  _strlen_recursion - print the length of a string.
* @n: the string length.
* Return: nothing.
*/

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
