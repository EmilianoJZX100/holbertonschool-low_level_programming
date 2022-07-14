#include "lists.h"
/**
 * list_len - return the numbers of elements
 * @h: node
 * Return: i
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
