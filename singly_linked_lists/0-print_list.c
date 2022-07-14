#include "lists.h"
/**
 * print_list - prints the elements of list_t
 * @h: node
 * Return: i
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	}
	return (i);
}
