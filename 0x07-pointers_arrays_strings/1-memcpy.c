#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: memory area to be copied to
 * @src: memory to be copied from
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

for (; x < n; x++)
{
	dest[x] = src[x];
}
return (dest);
}
