#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: content of the file.
 * Return: 1 for success. -1 for failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(fd, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
