#include "main.h"

/**
 * append_text_to_file - Append text to the file.
 * @fn: pointer to name of file.
 * @ptr: string to be added.
 *
 * Return: If function fails - -1.
 *         If the file does not exist - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *fn, char *ptr)
{
	int op, x, len = 0;

	if (fn == NULL)
		return (-1);

	if (ptr != NULL)
	{
		for (len = 0; ptr[len];)
			len++;
	}

	op = open(fn, O_WRONLY | O_APPEND);
	x = write(op, ptr, len);

	if (op == -1 || x == -1)
		return (-1);

	close(op);

	return (1);
}
