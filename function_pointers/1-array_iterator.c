#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array of functions
 * @size: size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			(*action)(array[a]);
	}
}
