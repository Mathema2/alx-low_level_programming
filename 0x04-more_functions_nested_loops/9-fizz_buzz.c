#include <stdio.h>

/**
 * main -  prints either numbers
 * or fizz or buzz or fizzbuzz
 * Return: 0 (success)
 */
int main(void)
{
int x;

for (x = 1; x <= 100; ++x)
{
if ((x % 3 == 0) && !(x % 5 == 0))
	printf("Fizz");
else if ((x % 5 == 0 && !(x % 3 == 0))
	 printf("Buzz");
else if (x % 3 == 0 && x % 5 == 0)
	printf("Fizzbuzz");
else
	printf("%d", x);
if (x != 100)
	printf(" ");
else
	printf("\n");
}
return (0);
}
