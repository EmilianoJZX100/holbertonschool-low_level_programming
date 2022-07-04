#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, pri;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		pri = va_arg(list, int);

	if (separator != NULL)
	{
		printf("%s%d", separator, pri);
	}
	else
	{
		pri = va_arg(list, int);
		printf("%d\n", pri);
	}
	}
	va_end(list);
}
