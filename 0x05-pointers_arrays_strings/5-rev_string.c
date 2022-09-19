#include "main.h"

/**
 * rev_string - that reverses a string
 * @s: pointer argument
 * Return: nothing
 */

void rev_string(char *s)
{
int x = 0;

while (*(s + x) != '\0')
{
	x++;
}
x--;
while (x >= 0)
{
	_putchar(*(s + x));
	x--;
}
_putchar('\n');
}
