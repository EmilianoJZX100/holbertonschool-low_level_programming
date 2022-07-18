#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the first node of a list
 * @index: node that should be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newnode, *end = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(end);
		return (1);
	}

	while (i < (index - 1) && end)
	{
		if (end->next == NULL)
			return (-1);
		i++;
		end = end->next;
	}
	newnode = end->next;
	end->next = newnode->next;
	free(newnode);
	return (1);
}
