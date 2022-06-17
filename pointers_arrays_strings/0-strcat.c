#include "main.h"
/**
 * _strcat - concatena src con dest
 * @dest: destino
 * @src: origen
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int s;
	int e;

	for (d = 0; dest[d] != '\0'; d++)
		;
	for (s = 0; src[s] != '\0'; s++)
		;
	for (e = 0; e <= s; e++)
	{
		dest[d] = src[e];
		d++;
	}
	return (dest);
}
