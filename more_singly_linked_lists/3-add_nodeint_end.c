#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to the first node
 * @n: int
 * Return: newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *end = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = newnode;
	}
	return (newnode);
}
