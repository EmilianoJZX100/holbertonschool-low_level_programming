#include "main.h"
/**
 * _strlen - function that returns the leng of a string
 * @s: string
 * Return: Var
 */
int _strlen(char *s)
{
	int i, a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = a + 1;
	}
		return (a);
}
