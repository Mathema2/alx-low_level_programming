#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file 
 * @text_content: content to append at end of file
 * Return: 1 on Success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int count, len = 0, x, y;

if (filename == NULL)
	return (-1);

x = open(filename, 2 | O_APPEND, 0600);
if (x == -1)
	return (-1);
if (text_content == NULL)
	return (1);
for (y = 0; text_content[y]; y++)
	len++;

count = write(x, text_content, len);
if (count == -1)
{
	close(x);
	return (-1);
}
close(x);

return (1);
}
