#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range to allocate
 * @max: maximum range to allocate
 * Return: The pointer to the newly array
 */

int *array_range(int min, int max)
{
int a, b;
int *range;

if (min > max)
return (NULL);
b = min;
range = (int *) malloc(sizeof(int) * (max - min + 1));
if (range == NULL)
return (NULL);
for (a = 0; a <= (max - min); a++)
{
	range[a] = b;
	b++;
}
return (range);
}
