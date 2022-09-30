#include "main.h"

/**
 * _strncpy - fuction that copy a string
 * @dest: string to copy to
 * @src: sting to copy from
 * @n: numbers of character to copy
 * Return: pointer character
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;
int y;

for (x = 0; x < n; x++)
{
	if (src[x] == '\0')
{
	for (y = x; y < n && dest[y] != '\0'; y++)
		dest[y] = '\0';
	break;
}
dest[x] = src[x];
}
return (dest);
}
