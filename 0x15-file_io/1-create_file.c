#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on Success, -1 if unsuccessful
 */

int create_file(const char *filename, char *text_content)
{
int count, len = 0, x;

if (filename == NULL)
	return (-1);

x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (x == -1)
	return (-1);

if (text_content != NULL)
{
	while (text_content[len])
	len++;
}

count = write(x, text_content, len);
if (count == -1)
{
	close(x);
	return (-1);
}
close(x);

return (1);
}
