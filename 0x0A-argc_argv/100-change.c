#include <stdio.h>
#include <stdlib.h>

/**
* main - main point.
* @argc: arg count.
* @argv: arg vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
int cents, quarters, dimes, nickels, twos, ones, total_coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

quarters = 0;
dimes = 0;
nickels = 0;
twos = 0;
ones = 0;

while (cents >= 25)
{
cents -= 25;
quarters++;
}

while (cents >= 10)
{
cents -= 10;
dimes++;
}

while (cents >= 5)
{
cents -= 5;
nickels++;
}

while (cents >= 2)
{
cents -= 2;
twos++;
}

while (cents >= 1)
{
cents -= 1;
ones++;
}

total_coins = quarters + dimes + nickels + twos + ones;
printf("%d\n", total_coins);

return (0);
}
