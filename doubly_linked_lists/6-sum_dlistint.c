#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: pointer of list
 * Return: counter
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	while (head)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
