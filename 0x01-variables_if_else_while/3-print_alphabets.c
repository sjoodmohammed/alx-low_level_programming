#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
char c = 97;
char s = 65;
	while (c >= 97 && c <= 122)
	{
		putchar(c);
		c++;
	}
	while (s >= 65 && s <= 90)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
