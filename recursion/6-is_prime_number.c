#include "main.h"
/**
 * primo - find the prime number
 * @m: var
 * @n: prime number
 * Return: primo
 */
int primo(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else if ((n % m) == 0)
	{
		return (0);
	}
	else
		return (primo(n, m - 1));
}
/**
 * is_prime_number - function
 * @n:number
 * Return: primo
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (primo(n, n - 1));
	}
	else
	{
	return (0);
	}
}
