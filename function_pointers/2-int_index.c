#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: where to search for an integer
 * @size: number of elements of the array
 * @cmp: pointer to the function to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ((array) && (cmp))
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
		return (-1);
	}
	return (-1);
}
