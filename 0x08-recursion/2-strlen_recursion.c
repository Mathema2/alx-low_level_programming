#include "main.h"

/**
 * _strlen_recursion - find the length of a string.
 * @s: the string whose length will be calculated
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
int x = 0;

if (*s != '\0')
{
	x++;
	x +=  _strlen_recursion(s + 1);
}
return (x);
}
