#include "main.h"

/**
 * get_endianness - Check the endianess
 * Return: nothing
 */

int get_endianness(void)
{
int ind;

ind = 2;

if (ind & 1)
{
	return (0);
}
return (1);
}
