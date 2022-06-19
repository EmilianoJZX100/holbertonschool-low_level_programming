#include "main.h"
/**
 * _strncat - cat 2 strings w/o the \0 char
 * @dest: destino
 * @src: origen
 * @n: variable q aloja a d
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
		;
	for (s = 0; src[s] != '\0'; s++)
		;
	for (n = 0; n <= s; n++)
	{
		dest[d] = src[n];
		d++;
	}
	return (dest);
}
