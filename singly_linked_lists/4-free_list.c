#include "lists.h"
/**
 * free_list - frees a list
 * @head: frees what's next
 */
void free_list(list_t *head)
{
	list_t *frees;

	while ((frees = head))
	{
		if (frees->str)
			free(frees->str);
		head = head->next;
		free(frees);
	}
}
