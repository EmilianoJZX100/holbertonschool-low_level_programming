#include "main.h"
/**
 * _abs - prints an absolute value of an integer
 * @n: variable
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (0);
	}
}
