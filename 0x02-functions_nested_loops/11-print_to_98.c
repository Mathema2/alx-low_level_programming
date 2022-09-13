#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all integers from the number given and 98
* @n: number to start counting from
* Return: void
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
	printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
	printf("%d, ", n++);
printf("%d\n", n);
}
}
