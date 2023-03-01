#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL)
	return;
if (action == NULL)
	return;
for (i = 0; i < size; i++)
	action(array[i]);
}
