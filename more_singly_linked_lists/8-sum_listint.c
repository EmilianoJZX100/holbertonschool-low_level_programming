#include "lists.h"
/**
 * sum_listint - sum all the data (n) of a linked list
 * @head: pointer to the start of the list
 * Return: n data
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
