#include "main.h"

/**
 * is_prime_number - finds if a number is a prime number
 * @n: number to check
 * Return: 1 if successful or 0 if not
 */

int is_prime_number(int n)
{
int x = n / 2;

if (n <= 1)
	return (0);
return ( is_prime(n, x));
}

/**
 * is_prime - calculate if n is a prime number
 * @n: number to check
 * @x: number to start checking
 * Return: 1 if n is a prime number or 0 if not
 */

int is_prime(int n, int x)
{
if (x <= 1)
	return (1);
else if (n % x == 0)
	return (0);
return (is_prime(n, x - 1));
}
