#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the next to
 * @text_content: content to append int the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[n])
			n++;
		t = write(fd, text_content, n);
		if (t != n)
			return (-1);
	}
	close(fd);
	return (1);
}
