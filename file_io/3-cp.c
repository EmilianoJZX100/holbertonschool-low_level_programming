#include "main.h"
void cp_func(const char *file_from, const char *file_to);
/**
 * main - main function
 * @argc: count of arguments
 * @args: array of arguments
 * Return: int
 */
int main(int argc, char **args)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	cp_func(args[1], args[2]);
		exit(0);
}
/**
 * cp_func - copies content from a file to another
 * @file_from: origin of the content to copy
 * @file_to: destination of the content
 */
void cp_func(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, size_rd, size_wr;
	char *buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((size_rd = read(fd_from, buffer, 1024)) > 0)
	{
		size_wr = write(fd_to, buffer, size_rd);
		if (size_wr != size_rd)
		{
			size_rd = -1;
			break;
		}
		if (size_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (size_wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (size_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
