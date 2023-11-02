#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *array_range - creates an array of ints.
 * @min: starting int
 * @max: max int
 * Return: array of ints
*/
int *array_range(int min, int max)
{
int len, i;
int *ptr;

if (min > max)
	return (NULL);
len = max - min + 1;
ptr = malloc(sizeof(int) * len);
if (!ptr)
	return (NULL);
for (i = 0; i < len; i++)
	ptr[i] = min++;
return (ptr);
}
