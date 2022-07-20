#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * Return: 1 if it worked, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 64)
		{
			*n &= ~(1 << index);
			return (1);
		}
	}
	return (-1);
}
