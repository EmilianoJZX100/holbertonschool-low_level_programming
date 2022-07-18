#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer to the first node
 * Return: head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int pop = 0;

	if (!*head)
	{
		return (0);
	}
	newnode = *head;
	pop = (*head)->n;
	*head = newnode->next;
	free(newnode);
	return (pop);
}
