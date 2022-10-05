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
unsigned int a;
char *s;

s = (char *) malloc(size * sizeof(char));
if (s == NULL)
	return (NULL);
	for (a = 0; a < size; a++)
{
	s[a] = c;
}
return (s);
}
