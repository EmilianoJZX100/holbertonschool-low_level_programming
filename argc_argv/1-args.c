#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argumento
 * @argv: nombre programa
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
