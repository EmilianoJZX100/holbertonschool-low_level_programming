#include "main.h"
/**
 * swap_int - function that swaps values
 * @a: integer one
 * @b: integer two
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
