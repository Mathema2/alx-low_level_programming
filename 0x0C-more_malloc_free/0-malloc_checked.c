#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - give memory using malloc and exit if failed
 * @b: integer
 * Return: pointer to the array if successful or NULL
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
