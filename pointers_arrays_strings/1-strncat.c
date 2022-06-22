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
	int d, s, e;

	for (d = 0; dest[d] != '\0'; d++)
		;
	for (s = 0; src[s] != n; s++)
		;
	for (e = 0; e <= s; e++)
	{
		dest[d] = src[e];
		d++;
	}
	return (dest);
}
