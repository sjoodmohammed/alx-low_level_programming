# include <stdio.h>

/**
*main - Entry point.
*
*Return: Always 0.
*/

int main(void)
{
char c = 97;

	while (c <= 122)
	{
		if (c == 101 || c == 113)
		{
		c += 1;
		}
		else
		{
		putchar(c);
		c++;
		}
	}
	putchar('\n');
	return (0);
}
