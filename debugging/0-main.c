#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* _positive_or_negative - entry point
* * Return: 0
*/
int _positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
