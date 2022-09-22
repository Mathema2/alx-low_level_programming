#include "main.h"

/**
 * string_toupper -  function that changes lowercase letters to uppercase.
 * @s: pointer string
 * Return: pointer character
 */

char *string_toupper(char *s)
{
int x = 0;

while (s[x] != '\0')
{
	if (s[x] > 96 && s[x] < 123)
		s[x] -= 32;
	x++;
}
return (s);
}
