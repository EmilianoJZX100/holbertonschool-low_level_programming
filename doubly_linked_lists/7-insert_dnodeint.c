#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to a pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: tmp data file
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, size = 0;
	dlistint_t *tmp = *h;
	dlistint_t *cont = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
	return (NULL);

	while (cont->next)
	{
		size++;
		cont = cont->next;
	}
	if (size < idx)
	{
		return (NULL);
	}
	else
	{
		while (tmp->next)
		{
			if (i == idx - 1)
			{
				new->n = n;
				new->next = tmp->next;
				new->prev = tmp;
				tmp->next = new;
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (new);
}
