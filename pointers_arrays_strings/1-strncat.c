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
	int d, s;

	for (d = 0; dest[d]; d++)
		;
	for (s = 0; s < n && src[s]; s++)
		dest[d + s] = src[s];
	return (dest);
}
