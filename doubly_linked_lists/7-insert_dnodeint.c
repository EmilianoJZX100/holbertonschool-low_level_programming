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
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *aux;
	unsigned int index;

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	aux = *h;

	for (index = 0; index < (idx - 1); index++)
	{
		aux = aux->next;
		if (!aux)
			return (NULL);
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode->next = aux->next;
	newNode->prev = aux;

	aux->next = newNode;
	aux = newNode->next;
	aux->prev = newNode;
	return (newNode);
}
