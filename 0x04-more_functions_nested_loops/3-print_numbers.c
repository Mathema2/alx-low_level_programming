#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: returns number 0 to 9
 */

void print_numbers(void)
{
int x;

for (x = 48; x < 58; x++)
{
	putchar(x);
}
putchar(10);
}
