#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1(successful) , -1 if not
 */

int _putchar(charc)
{
return (write(1, &c, 1));
}
