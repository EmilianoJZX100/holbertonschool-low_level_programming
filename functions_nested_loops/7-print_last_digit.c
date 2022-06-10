#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last number
 * @n: digit
 * Return: n
 */
int print_last_digit(int n)
{
	(n = n % 10);
	(n = _abs(n));

	_putchar(n + 48);
	return (n);
}
