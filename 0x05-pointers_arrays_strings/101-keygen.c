#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Generates random valid passwords for the program 101-crackme.
 * Return: 0
 */
int main(void)
{
	int x;
	char m;

srand(time(NULL));
while (x <= 2645)
{
	m = rand() % 128;
	x += m;
	putchar(m);
}
putchar(2772 - x);
return (0);
}
