#include "lists.h"
/**
 * free_listint2 - frees a list
 */
void free_listint2(listint_t **head)
{
	listint_t *frees;

		while (*head)
	{
		frees = (*head);
		*head = (*head)->next;
		free(frees);
	}
		head = NULL;
}
