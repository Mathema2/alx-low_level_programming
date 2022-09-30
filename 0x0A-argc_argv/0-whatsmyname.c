#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: count argument
 * @argv: the argument
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

return (0);
}
