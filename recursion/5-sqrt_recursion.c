#include "main.h"
/**
 * helper - finds the natural square root
 * @m: root
 * @n: number to get the root
 * Return: 0
 */
int helper(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}
	return (helper(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get the root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
