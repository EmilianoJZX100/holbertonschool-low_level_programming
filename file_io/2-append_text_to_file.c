#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 if success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (!text_content)
	{
		if (fd != -1)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		write(fd, text_content, strlen(text_content));
	}
	return (1);
}
