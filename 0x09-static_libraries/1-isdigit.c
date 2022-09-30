#include "main.h"
/**
 * _isdigit - checks wheather a character is a digit or not
 * @c: the character to be tested
 * Return: 1 if it adigit, otherwise 0
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
