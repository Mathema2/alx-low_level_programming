#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: an array of elements
 * @size: number of elements in the array
 * @cmp: pointer to be used to compare values
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL)
	return (-1);
if (size <= 0)
	return (-1);
if (cmp == NULL)
	return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
