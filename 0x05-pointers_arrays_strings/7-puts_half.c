#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Return: nothing
 */

void puts_half(char *str)
{
int x = 0;

while (*(str + x) != '\0')
	x++;
if (x % 2 == 0)
	x /= 2;
else
	x = x / 2 + 1;
while (*(str + x) != '\0')
{
	_putchar(*(str + x));
	x++;
}
_putchar('\n');
}
