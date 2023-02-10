#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text filer and prints it to POSIX stdout
 * @filename: a pointer to the name of the file
 * @letters: the num of letters the function should read and print
 * Return: if the func fails or filename is NULL - 0
 *         O/w - the actual num of bytes the func can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
