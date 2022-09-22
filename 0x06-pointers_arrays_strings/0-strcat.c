#include "main.h"

/**
 * _strcat - fuction to add two strings and return a new one
 * @dest: first string
 * @src: second string
 * Return: pointer character
 */

char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;
char *m;

while (*(dest + x) != '\0')
	x++;
while (*(src + y) != '\0')
{
	*(dest + x) = *(src + y);
	x++;
	y++;
}
*(dest + x) = '\0';
m = dest;
return (m);
}
