#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file.
 * @fn: the text file
 * @let: number of letters needed
 * Return: w- number of bytes or 0
 */
ssize_t read_textfile(const char *fn, size_t let)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * let);
	t = read(fd, buf, let);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}
