#include "main.h"
/**
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n<0 || n>15)
			{
				_putchar(' ')

