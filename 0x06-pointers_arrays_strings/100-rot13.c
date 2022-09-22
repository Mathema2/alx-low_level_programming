#include "main.h"

/**
 * rot13 - function that encodes a string
 * @m: string pointer character
 * Return: character pointer
 */

char *rot13(char *m)
{
int i;
int x;
char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz";

for (i = 0; m[i] != '\0'; i++)
{
	for (x = 0; x < 52; x++)
{
	if (alphabet[x] == m[i])
{
	m[i] = rot_13[x];
	break;
}
}
}
return (m);
}
