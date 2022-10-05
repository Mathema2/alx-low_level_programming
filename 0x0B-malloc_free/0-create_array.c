#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: length of the array
 * @c: input char
 * Return: An Array initialized with a specific chararacter
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *m;

m = (char *) malloc(size * sizeof(char));
if (m == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
{
	m[i] = c;
}
return (m);
}
