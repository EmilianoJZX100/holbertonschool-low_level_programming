#include "main.h"
/**
 * print_line - function
 * @_: character
 */
void print_line(int n)
{
	while (n > 0)
		{
		_putchar('_');
		n--;
		}
	_putchar('\n');
}
