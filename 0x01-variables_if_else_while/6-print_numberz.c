# include <stdio.h>

/**
*main - Entry point.
*
*Return: Always 0.
*/

int main(void)
{
int c;
c = 48;
	while (c >= 48 && c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
