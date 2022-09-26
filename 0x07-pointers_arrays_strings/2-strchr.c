#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: character to check
 * @c: string
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
int x;

for (x = 0; *(s + x); x++)
{
	if (*(s + x) == c)
	return (s + x);
}
if (*(s + x) == c)
return (s + x);
return (0);
}
