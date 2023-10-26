#include "main.h"

/**
* is_prime_number - return a prime number number.
* @n: the input number .sss
* Return: 1 if prime or 0 if not prime.
*/

int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
* check_prime - check if number is prime.
* @n: the input number .
* @othrn: int.
* Return: an int.
*/

int check_prime(int n, int othrn)
{
if (othrn >= n && n > 1)
return (1);
else if (n % othrn == 0 || n <= 1)
return (0);
else
return (check_prime(n, othrn + 1));
}
