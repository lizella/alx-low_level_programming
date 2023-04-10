#include "main.h"
/**
 * read_textfile - function reads a text file and prints to POSIX
 * @filename: txt file
 * @letters: number of letters
 * Return: 0 when function fails or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(a, buf, letters);
	b = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(a);
	return (b);
}

