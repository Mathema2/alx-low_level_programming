#include "main.h"

/**
 * _sqrt_recursion - calculates  the natural square root
 * @n: integer used
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
	return (n);
return (_sqrt(0, n));
}

/**
 * _sqrt - finds the square root
 * @n: number to test
 * @y: the number squared
 * Return: the square root
 */

int _sqrt(int n, int y)
{
if (n > y / 2)
	return (-1);
else if (n * n == y)
	return (n);
return (_sqrt(n + 1, y));
}
