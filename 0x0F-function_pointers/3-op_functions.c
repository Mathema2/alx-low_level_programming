#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calculates the sum of a and b
 * @a: 1st integer to add
 * @b: 2nd integer to add
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: 1st number 
 * @b: 2nd number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 * @a: 1st num
 * @b: 2nd num
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funds the result of the division of a by b
 * @a: 1st num
 * @b: 2nd num
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a / b);
}

/**
 * op_mod - returns the sum of a and b
 * @a: 2nd integer
 * @b: 2nd integer
 * Return: nothing
 */

int op_mod(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a % b);
}
