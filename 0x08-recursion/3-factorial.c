#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: the number given
 * Return: the factorial of a given number.
 */

int factorial(int n)
{
int x;

if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
x = factorial(n - 1);
return (n * x);
}
