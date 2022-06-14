#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
        int j;
        int k = 0;

        while (*s != '\0')
        {
                ++s;
                k++;
        }
	s--;

        for (j = k; j > 0; j--)
        {
                _putchar(*s);
		s--;
        }
        _putchar('\n');
}
