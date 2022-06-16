#include "main.h"
/**
 * puts_half - coutns the half of the array
 * @s: string
 * Return: 0
 */
void puts_half(char *s)
{
	int i;
	int half;

	for (i = 0; s[i] != '\0'; i++)
		half = i / 2;
	if (i % 2 != 0)
		half++;

	for (; half <= i; half++)
	{
		_putchar(s[half]+1);
	}
		_putchar('\n');
}
