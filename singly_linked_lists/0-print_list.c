#include "lists.h"
/**
 * print_list - prints the elements of list_t
 * Return: i
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf ("[%d] %s\n", h->len, h->str);
	}
	i++;
	return (i);
}
