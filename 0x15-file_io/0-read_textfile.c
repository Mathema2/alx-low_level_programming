#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output
 * @filename: path of the file to read
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int count, x, y;

if (filename == NULL)
	return (0);

x = open(filename, O_RDONLY);
if (x == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
	return (0);

y = read(x, buffer, letters);
if (y == 0)
{
	free(buffer);
	close(x);
	return (0);
}

count = write(STDOUT_FILENO, buffer, y);
if (count == -1)
{
	free(buffer);
	close(y);
	close(x);
	return (0);
}
close(y);
close(x);

return (count);
}
