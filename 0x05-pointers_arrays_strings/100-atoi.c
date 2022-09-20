#include "main.h"

/**
 * _atoi -  function that convert a string to an integer
 * @s: pointer parameter
 * Return: the integer that is converted
 */

int _atoi(char *s)
{
int index, x;
unsigned int num;
int sign = 1;
char now;

index = 0;
num = 0;
{
while
	(*(s + index) != '\0');
	now = *(s + index);
if (now == '-')
{
	sign *= -1;
}
if (now >= '0' && now <= '9')
{
	x = index;
	while (*(s + x) > 47 && *(s + x) < 58)
{
	num = (num * 10) + *(s + x) - '0';
	x++;
}
break;
}
index++;
}
if (sign < 0)
	num *= sign;
return (num);
}
