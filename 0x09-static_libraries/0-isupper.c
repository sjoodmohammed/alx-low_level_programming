#include "main.h"

/**
 * _isupper - Check fo lower case character.
 * @c: the character to be checked.
 * Return: 1 for upper case or 0 for other.
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

