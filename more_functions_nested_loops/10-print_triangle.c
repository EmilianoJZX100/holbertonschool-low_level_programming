#include "main.h"
/**
 * print_triangle - function
 * Return: 0
 */
void print_triangle(int size)
{
	int j, i;

	for (i = 1; i < size; i++)
		{
			for (j = 1; j < size; j++)
				{
					if ((i - j) >= size)
					{
						_putchar('#');
					}
					else
					{
						_putchar(' ');
					}
				}
		}
}
