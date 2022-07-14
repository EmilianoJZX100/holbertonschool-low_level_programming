#include "lists.h"
/**
 * print_list - prints the elements of list_t
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf ("[%d] %s\n", h->len, h->str);
	}
	return (0);
	i++;
}
