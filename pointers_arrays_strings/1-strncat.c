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

	if (s < n)
	{
		n = s;
	}
	for (d = 0; dest[d]; d++)
		;
	for (; s < src[s]; s++)
	{
		dest[d] = src[s];
		d++;
	}
	return (dest);
}
