#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer argument
 * Return: nothing
 */

void rev_string(char *s)
{
int x = 0, i, length;
char c;

while (*(s + x) != '\0')
{
	x++;
}
	length = x;
	x--;
for (i = 0; i < length / 2; i++)
{
	c = *(s + i);
	*(s + i) = *(s + x);
	*(s + x) = c;
	x--;
}
}
