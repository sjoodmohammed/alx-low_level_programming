#include "main.h"

/**
* _strpbrk - search string for any of the set of bytes.
* @s: the string to be searched.
* @accept: the set of bytes to be seearched for.
* Return: if the set is matched apointer to the matched .
* if no set is matched to NULL.
*/

char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
