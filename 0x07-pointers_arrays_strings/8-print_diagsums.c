#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * @a: pointerto start matrix
 * @size: width of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i, x, y, l = 0, m = 0;

for (i = 0; i < size; i++)
{
	y = (i * size) + i;
	l +=  *(a + y);
}
for (x = 0; x < size; x++)
{
	y = (x * size) + (size - 1 - x);
	m +=  *(a + y);
}
printf("%i, %i\n", l, m);
}
