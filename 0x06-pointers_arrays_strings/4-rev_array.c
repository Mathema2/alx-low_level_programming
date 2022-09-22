#include "main.h"

/**
 * reverse_array - reverse the elements of an array
 * @a: array
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int x;
int y;
int z;

if (n % 2 == 0)
	z = n;
else
	z = n - 1;
for (x = 0; x < z / 2; x++)
{
	y = a[x];
	a[x] = a[n - 1];
	a[n - 1] = y;
	n--;
}
}
