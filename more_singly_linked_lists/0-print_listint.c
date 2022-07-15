#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: node
 * Return: i nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
