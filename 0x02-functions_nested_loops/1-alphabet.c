#include "main.h"
/**
* main - print alphabets in lowercase
*/
void print_alphabet(void)
{
int j;

for (j = 'a'; j <= 'z'; j+++)
{
	_putchar(j);
}
_putchar('\n');
}