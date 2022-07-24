#include "main.h"
/**
 * create_file - function that creates a file
 * @text_content: content of filename
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (!filename)
		return (-1);
	/**if (!text_content)
	{
		fp = open(filename, O_RDWR | O_CREAT);
		return (fp);
	}*/
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	write(fp, text_content, strlen(text_content));
	close(fp);
	return (fp);
}
