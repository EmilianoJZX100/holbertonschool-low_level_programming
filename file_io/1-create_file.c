#include "main.h"
/**
 * create_file - function that creates a file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fp = fopen(filename, "rw");
		return (1);
	}
	fp = fopen(filename, "rw");

	for (i = 0; text_content[i] != '\n'; i++)
	{
		fputc(text_content[i], fp);
	}
	fclose(fp);
	return (1);
}
