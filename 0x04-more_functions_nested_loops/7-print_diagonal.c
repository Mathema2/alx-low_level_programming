#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the number of times the character \ should be printed
 * Return: returns the diagonal
 */

void print_diagonal(int n)
{
int x, y;

if (n <= 0)
{
	putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
	putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
