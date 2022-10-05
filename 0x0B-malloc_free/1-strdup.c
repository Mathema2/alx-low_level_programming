#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space
 * @str: This is the input string
 * Return: pointer to the duplicated string,
 * null if insufficient memory was available
 */

char *_strdup(char *str)
{
char *s;
int a;
int b;

if (str == NULL)
	return (NULL);
for (a = 0; str[a] != '\0'; a++)
	;
s = (char *)  malloc((a + 1) * sizeof(char));
if (s == NULL)
	return (NULL);
for (b = 0; b < a ; b++)
	s[b] = str[b];
s[a + 1] = '\0';
return (s);
}
