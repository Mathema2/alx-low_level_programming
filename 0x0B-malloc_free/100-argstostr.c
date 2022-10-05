#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strcat - Concatenate string,
 * src appended to dest
 * @dest: Destination string
 * @src: Source string
 * Return: Concatenate newString to dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;

for (a = 0; dest[a] != '\0'; a++)
	;
for (b = 0; src[b] != '\0'; b++)
{
	dest[a] = src[b];
	a++;
}
return (dest);
}

/**
 * _strlen - number of the length of the string
 * @s: string to be check
 * Return: length of the string
 */

int _strlen(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
;
return (a);
}

/**
 * argstostr - Concatenates argv to new string
 * @ac: Argument count
 * @av: Argument
 * Return: pointer to a new string,
 * or NULL if not successful
 */

char *argstostr(int ac, char **av)
{
int index, sumString;
char *newString;

	sumString = 1;
if (ac == 0 || av == NULL)
	return (0);
for (index = 0; index < ac && av[index]; index++)
{
	sumString += _strlen(av[index]);
}
	newString = malloc((sumString * sizeof(char)) + ac);
for (index = 0; index < ac && av[index]; index++)
{
	newString = _strcat(newString, av[index]);
	newString = _strcat(newString, "\n");
}
if (newString == NULL)
	return (NULL);
return (newString);
}
