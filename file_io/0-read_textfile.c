#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: name of the file to print
 * @letters: letters it should read and print
 * Return: actual numbers of letters, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int contador, texto;
	char *archivo;

	if (!filename)
		return (0);

	archivo = malloc(sizeof(char) * letters);
	if (!archivo)
		return (0);

	texto = open(filename, O_RDONLY);
	if (texto == -1)
		return (0);

	contador = read(texto, archivo, letters);

	write(STDOUT_FILENO, archivo, contador);
	close(texto);
	return (contador);
}
