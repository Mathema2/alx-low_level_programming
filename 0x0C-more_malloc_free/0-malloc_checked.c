#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - give memory using malloc and exit if failed
 * @b: integer
 * Return: pointer to the array if successful or NULL
 */

void *malloc_checked(unsigned int b)
{
int *x = malloc(b);

if (x == 0)
	exit(98);
return (x);
}
