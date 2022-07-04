#include "variadic_functions.h"
/**
 * print_strings - function that print strings
 * @separator: string to print between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

			if (str == NULL)
			{
				printf("%s", str);
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("(nil)");
			}
	va_end(list);
	}
	printf("\n");
}
