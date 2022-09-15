#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: the number of times the character \ should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
int x;
int y;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	_putchar('\\');
	_putchar('\n');
for (x = 0; x < (n - 1); x++)
{
for (y = i; y >= 0; y--)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
}
