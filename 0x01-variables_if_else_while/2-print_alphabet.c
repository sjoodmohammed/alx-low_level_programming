#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
char c;

c = 97;
while (c <= 122)
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
