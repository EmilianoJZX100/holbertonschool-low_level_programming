#include "main.h"
/**
 * _strlen_recursion - function that returns the lenght of a string
 * @n: string lenght
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

