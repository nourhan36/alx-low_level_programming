#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file.
 * @fn: the text file
 * @let: number of letters needed
 * Return: w- number of bytes read or 0
 */
ssize_t read_textfile(const char *fn, size_t let)
{
	char *ful;
	ssize_t filed;
	ssize_t x;
	ssize_t y;

	filed = open(fn, O_RDONLY);
	if (fd == -1)
		return (0);
	ful = malloc(sizeof(char) * let);
	y = read(filed, ful, let);
	x = write(STDOUT_FILENO, ful, y);

	free(ful);
	close(filed);
	return (x);
}
