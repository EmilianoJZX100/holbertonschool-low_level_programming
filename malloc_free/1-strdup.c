#include "main.h"
#include <string.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string a copiar
 * Return: pr
 */
char *_strdup(char *str)
{
	char *pr;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	pr = malloc(size * sizeof(char) + 1);
	if (pr == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < size; i++)
		pr[i] = str[i];
	}
	return (pr);
}
