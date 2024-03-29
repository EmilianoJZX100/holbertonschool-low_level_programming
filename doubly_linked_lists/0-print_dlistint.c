#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to dlistint_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
