#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * helper - adds a variable to get the  sq num.
 * @m: sq of a number
 * @n: num to get the sq
 * Return: 0
 */
int helper (int n, int m)
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
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
