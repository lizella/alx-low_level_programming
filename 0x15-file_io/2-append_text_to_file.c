#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: file name
 * @text_content: string to add at the end of a file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lk, b, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			len++;
	}

	lk = open(filename, O_WRONLY | O_APPEND);
	b = write(o, text_content, length);

	if (lk == -1 || b == -1)
		return (-1);

	close(lk);

	return (1);
}

