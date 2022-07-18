#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	for (nth = 0; nth < index; nth++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
