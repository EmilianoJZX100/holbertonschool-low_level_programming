#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of a list
 * @idx: position of newnode in the list
 * @n: newnode data
 * Return: newnode or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *end = *head;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (i < (idx - 1) && end)
	{
		if (end->next == NULL)
			return (NULL);
		i++;
		end = end->next;
	}

	newnode->next = end->next;
	end->next = newnode;
	return (newnode);
}
