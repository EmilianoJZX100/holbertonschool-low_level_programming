#include "main.h"
#include <string.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: iterador de size1
 * @s2: iterador de size2
 * Return: s3
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s3;
	int size1 = strlen(s1);
	int size2 = strlen(s2);

	if (s1 == NULL)
	{
		size1 = 0;
	}
	if (s2 == NULL)
	{
		size2 = 0;
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	s3 = malloc((size1 + size2) + 1);
		for (i = 0; s1[i]; i++)
		{
			s3[i] = s1[i];
		}
		for (j = 0; s2[j]; j++)
		{
			s3[i + j] = s2[j];
		}
		s3[i + j] = '\0';
		return (s3);
}
