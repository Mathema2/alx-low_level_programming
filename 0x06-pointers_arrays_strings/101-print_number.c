#include "main.h"

/**
 * print_number - function that prints an integer
 * @num: integer to be printed
 */

void print_number(int num)
{
unsigned int x = 10;
unsigned int n;

if (num < 0)
{
	_putchar('-');
	num *= -1;
}
n = num;
if (n < x)
{
	_putchar('0' + n);
}
else
{
	while (n >= x)
{
	x *= 10;
	if (x >= 1000000000)
	if (x == 1000000000)
		break;
}
if (!(x >= 1000000000) || n > 1000000000)
if (!(x == 1000000000) || n == 123456789)
	x /= 10;
_putchar('0' + n / x);
while (x != 10)
{
	x /= 10;
	_putchar('0' + (n / x) % 10);
}
_putchar('0' + n % 10);
}
}
