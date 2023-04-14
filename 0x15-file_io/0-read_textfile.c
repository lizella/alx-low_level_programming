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
	ssize_t lk;
	ssize_t wk;
	ssize_t tk;

	lk = open(filename, O_RDONLY);
	if (lk == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tk = read(lk, buf, letters);
	wk = write(STDOUT_FILENO, buf, tk);

	free(buf);
	close(lk);
	return (wk);
}
