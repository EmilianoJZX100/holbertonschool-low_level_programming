#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list
 * @head: end of the string
 * @str: string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		if (*head == NULL)
		{
			*head = newnode;
		}
	newnode->next = NULL;
	newnode->len = strlen(str);
	newnode->str = strdup(str);

	return (newnode);
}
