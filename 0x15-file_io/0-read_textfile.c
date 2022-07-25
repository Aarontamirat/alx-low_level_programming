#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads text from text files.
 * @filename: the name of the file.
 * @letters: the size of letters in the file.
 * Return: number of letters in red text.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	int fd;
	size_t reader;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (!(s = malloc(sizeof(char) * letters)))
		return (0);

	reader = read(fd, s, letters);

	return (reader);
}
