#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first bytes of s2
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i;
	unsigned int j;
	unsigned int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	size = strlen(s1) + n;
	a = malloc((size + 6) * sizeof(char));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		a[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		a[i] = s2[j];
		i++;
	}

	a[i] = '\0';
	return (a);
}

