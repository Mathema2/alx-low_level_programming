#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*  main -main checks for the last digits of a number stored in a variable
* Return: 0 - success
*/
int main(void)
{
int n;
int l;
char str[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
	printf("%s %d is %d and is greater than 5\n", str, n, l);
}
else if (l == 0)
{
	printf("%s %d is %d and is 0\n", str, n, l);
}
else if (l < 6 && l != 0)
{
	printf("%s %d is %d and is less than 6 and not 0\n", str, n, l);
}
return (0);
}
