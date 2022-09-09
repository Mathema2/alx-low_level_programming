#include <stdio.h>
/**
* main - prints the size of variable types
* Return: 0 -success
*/
int main(void)
{
char m;
int x;
long int y;
long long int z;
float e;

printf("Size of a char: %d byte(s)\n", sizeof(m));
printf("Size of an int: %d byte(s)\n", sizeof(x));
printf("Size of a long int: %d byte(s)\n", sizeof(y));
printf("Size of a long long int: %d byte(s)\n", sizeof(z));
printf("Size of a float: %d byte(s)\n", sizeof(e));
return (0);
}
