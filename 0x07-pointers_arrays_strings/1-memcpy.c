#include "main.h"

/**
* char *_memcpy - function copies the bytes from memory.
* @src: files from memory area.
* @dest: to memory area.
* @n: function copies.
* Return: a pointer to @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
