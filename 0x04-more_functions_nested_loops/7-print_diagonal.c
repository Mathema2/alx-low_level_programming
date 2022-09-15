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
for (i = 0; i < (n - 1); i++)
{
for (j = i; j >= 0; j--)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
}
