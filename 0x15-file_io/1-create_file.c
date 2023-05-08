#include "main.h"

/**
 * create_file - Creates new file.
 * @fn: pointer to created file.
 * @ptr: pointer to a string.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *fn, char *ptr)
{
	int filed, x, len = 0;

	if (fn == NULL)
		return (-1);

	if (ptr != NULL)
	{
		for (len = 0; ptr[len];)
			len++;
	}

	filed = open(fn, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(filed, ptr, len);

	if (filed == -1 || x == -1)
		return (-1);

	close(filed);

	return (1);
}
