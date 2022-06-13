#include "main.h"
/**
 * print_square - function
 * @size: variable
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
