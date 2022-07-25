#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: content to be appended.
 * Return: 1 for success. -1 for failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(fd, text_content, letters);

		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
