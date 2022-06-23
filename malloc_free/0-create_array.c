#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: largo del array
 * @c: caracter a imprimir
 * Return: pr
 */
char *create_array(unsigned int size, char c)
{
	char *pr;
	unsigned int i;

	pr = malloc(size * sizeof(char));
	if (pr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size ; i++)
	{
		pr[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (pr);
	}
	return (pr);
}
