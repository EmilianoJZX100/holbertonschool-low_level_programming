#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum value of int in the array
 * @max: max value of int in the array
 * Return: int
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *a;

	j = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min) + 4);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}
	return (a);
}
