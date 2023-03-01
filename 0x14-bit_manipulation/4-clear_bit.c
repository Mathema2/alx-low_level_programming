#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int t_binary;

t_binary = (sizeof(*(n)) * 8);
if (index < t_binary)
{
	*(n) = (~(1 << index) & *(n));
	return (1);
}
return (-1);
}
