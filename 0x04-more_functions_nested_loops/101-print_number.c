#include"main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
unsigned int num = n;

/*first check if its negative*/
if (n < 0)
{
	_putchar('-');
num = -num;
}
/*print the first few integers*/
if ((num / 10) > 0)
	print_number(num / 10);
/*prints the last digit*/
	_putchar((num % 10) + 48);
}
