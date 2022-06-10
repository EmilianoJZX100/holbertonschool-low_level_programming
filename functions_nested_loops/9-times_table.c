#include "main.h"

/**
 * times_table - the clock
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			c = a * b;
			if (c > 9)
			{
				if (b != 0)
				{
				_putchar(',');
				_putchar(' ');
				}
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			else
			{
				if (b != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar((c) + 48);
			}
		}
		_putchar('\n');
	}
}
