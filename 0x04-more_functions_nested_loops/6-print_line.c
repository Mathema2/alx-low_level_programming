#include "main.h"
#include <stdio.h>

/**
 * print_line -  prints a straight line
 * @n: the number of times the character _ should be printed
 * Return: returns the line
 */

void print_line(int n)
{
while (n-- > 0)
{
	putchar('_');
}
putchar('\n');
}
