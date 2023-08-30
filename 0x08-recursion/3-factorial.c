#include "main.h"

/**
*  factorial - count the factorial of a number.
* @n: the number .
* Return: 0 or nuumber.
*/

int factorial(int n)
{
if (n <= 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
