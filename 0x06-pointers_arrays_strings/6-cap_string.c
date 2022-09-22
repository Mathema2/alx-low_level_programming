#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @m: pointer string character
 * Return: pointer character
 */

char *cap_string(char *m)
{
int x = 0;
int y;
sep[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (m[0] > 96 && m[0] < 123)
	m[0] -= 32;
while (m[x] != '\0')
{
if (m[x] > 96 && m[x] < 123)
{
	y = 0;
	while (y < 14)
{
	if (m[x - 1] == sep[y])
{
	m[x] -= 32;
	break;
}
y++;
}
}
x++;
}
return (m);
}
