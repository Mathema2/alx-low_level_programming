#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: the number of times the character \ should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
int x;
int y

if (n > )
{
for (x = 0; x < n; x++)
{
for (y = 0; y > x; y++)
{
	putchar(' ');
}
	putchar('\\');
if (x == (n - 1))
{
	continue;
}
	putchar('\n');
}
}
putchar('\n');
}
