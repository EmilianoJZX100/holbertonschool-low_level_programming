#include "main.h"
/**
 * _strncat - cat 2 strings w/o the \0 char
 * @dest: destino
 * @src: origen
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s = 0;

	for (d = 0; dest[d]; d++)
		;
	while (src[s] != src[n])
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}
