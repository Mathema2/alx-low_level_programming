#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the number of times the character \ should be printed
 * Return: returns the diagonal
 */

void print_diagonal(int n)
{
int len;
int space;

if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
{
	putchar(' ');
}
 putchar('\\');
 if (len == (n - 1))
{
	continue;
}
}
 putchar('\n');
}
}
