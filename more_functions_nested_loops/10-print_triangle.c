#include "main.h"
/**
 * print_triangle - function
 * @size: table
 * Return: 0
 */
void print_triangle(int size)
	{
		int j, i;
		
for (i = 0; i < size; i++)
		{
			for (j 0; j < size; j++)
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
