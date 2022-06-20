#include "main.h"
/**
 * int factorial(int n) - return the factorial of a given number
 * @n: number
 * Return: 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n -1));
	}
	return (0);
}
