#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string to check
 * @accept: string to check against
 * Return: pointer to the byte in s
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int x, y;

for (x = 0; s[x]; x++)
{
for (y = 0; accept[y]; y++)
{
	if (s[x] == accept[y])
	break;
}
if (accept[y])
return (s + x);
}
return (0);
}
