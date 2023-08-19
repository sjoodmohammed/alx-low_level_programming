#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 * descriptions: prints the numbers 1 - 100 
 * fizzfor multiple of 3, buzz for 5 and
 * fizz buzz for multiple of both
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizz Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
