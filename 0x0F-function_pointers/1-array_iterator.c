#include "main.h"

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
unsigned int i = 0;

if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
	action(array[i]);
	i++;
}
}
}
