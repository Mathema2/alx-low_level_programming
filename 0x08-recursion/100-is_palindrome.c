#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if successful and 0 if not.
 */

int is_palindrome(char *s)
{
int x = 1;

	check(s, 0, _strlen_recursion(s) - 1, &x);
return (x);
}

/**
 * check - checks if a string is a palindrome
 * @s: string to check
 * @y: the start index
 * @z: the end index
 * @x: indicates a string is a palindrome
 * Return: nothing
 */

void check(char *s, int y, int z, int *x)
{
if (y <= z)
{
	if (s[y] == s[z])
	*x *= 1;
	else
	*x *= 0;
	check(s, y + 1, z - 1, x);
}
}

/**
 * _strlen_recursion - finds the string length
 * @s: string to use
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
int p = 0;

if (*s != '\0')
{
	p++;
	p += _strlen_recursion(s + 1);
}
return (p);
}
