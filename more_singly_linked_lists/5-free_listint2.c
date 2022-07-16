#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (!head)
		return;
	{

		while (*head)
	{
		frees = (*head);
		*head = (*head)->next;
		free(frees);
	}
	}
		head = NULL;
}
