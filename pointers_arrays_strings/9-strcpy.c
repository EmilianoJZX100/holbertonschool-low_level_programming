#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies from one string to another
 * @src: origen
 * @dest: destino
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int t;
	int i;

	for (t = 0; dest[t] != '\0'; t++)/**determino el tam de dest*/
		;
	for (i = 0; i < t; i++)
	{/**bucle con tope en el tamaño de dest a traves de i*/
		dest[i] = src[i];
	}
	return (dest);/**retorna el string ahora almacenado en dest*/
}
