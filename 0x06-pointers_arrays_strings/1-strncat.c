#include "main.h"

/**
 * _strncat - fuction to add two strings
 * it will use at most n bytes from src
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of characters
 * Return: pointer character
 */

char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;
char *s;

while (*(dest + x) != '\0')
	x++;
while (!(*(src + y) == '\0' || y == n))
{
	*(dest + x) = *(src + y);
	x++;
	y++;
}
*(dest + x) = '\0';
s = dest;
return (s);
}
