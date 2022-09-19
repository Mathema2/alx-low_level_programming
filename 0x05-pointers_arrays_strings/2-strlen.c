#include "main.h"

/**
 * _strlen - function that return the length of a given string.
 *
 * @s: pointer string to work on
 */

int _strlen(char *s)
{
int len = 0;

while (*(s + len) != '\0')
	len++;

return (len);
}
