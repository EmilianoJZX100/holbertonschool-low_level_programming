#include "main.h"
#include <string.h>
/**
 * *str_concat - function that concatenates two strings
 * @i: lenght of s3
 * @j: lenght of s1
 * @k: lenght of s2
 * Return: s3
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *s3;
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int sizet = (size1 + size2) + 1;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	s3 = malloc((size1 + size2) * sizeof(char) + 1);

	for (i = 0; i < sizet;)
		{
			for (j = 0; j < size1; j++)
			{
				s3[i] = s1[i];
				i++;
			}
			for (k = 0; k < size2; k++)
			{
				s3[i] = s2[i];
				i++;
			}
		}
	return (s3);
}

