#include "main.h"

/**
 * get_endianness - fuction that check the endianness
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
