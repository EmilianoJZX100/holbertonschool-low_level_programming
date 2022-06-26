#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: quantity of elements of the array
 * @size: size of the elements of the array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		a[i] = 0;
	}
	return (a);
}
