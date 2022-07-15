#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to first node
 * @n: int
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
