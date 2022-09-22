#include "main.h"

/**
 * leet - function that encodes a string
 * @s: string pointer
 * Return: pointer character
 */

char *leet(char *s)
{
int i = 0;
int x;
char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
leet[] = {'4', '3', '0', '7', '1'};

while (s[i] != '\0')
{
	x = 0;
	while (x < 5)
{
	if (s[i] == a[x] || s[i] == b[x])
	s[i] = leet[x];
	x++;
}
i++;
}
return (s);
}
