#include "main.h"
/**
 * create_file - file
 * @filename: pointer
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int lk, a, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	lk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(lk, text_content, length);

	if (lk == -1 || a == -1)
		return (-1);

	close(lk);

	return (1);
}

