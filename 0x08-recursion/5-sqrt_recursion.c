#include "main.h"

/**
*  _sqrt_recursion - count the square of a number.
* @n: the input number .
* Return: the result square.
*/

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
* square - return square root of a number.
* @n: the input number .
* @val:the iterator.
* Return: square root of -1.
*/
int square(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return (square(n, val + 1));
}
else
{
return (-1);
}
}
