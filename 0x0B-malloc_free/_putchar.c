#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character to be printed
 * Return: 1 (success) or -1 if no successful
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
