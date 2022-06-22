#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: programa
 * @argv: argumento
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	if (argc < 1)
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
		sum += (atoi(argv[a]));
	}
	printf("%d\n", sum);

	return (0);
}
