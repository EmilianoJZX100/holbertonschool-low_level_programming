#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 0)
	{
		return (0);
	}
	for (a = 0; a < argc; a++)
	{
		if ((atoi(argv[a])))
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	return (0);
}
