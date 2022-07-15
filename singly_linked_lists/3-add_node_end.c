#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list
 * @head: end of the list
 * @str: string
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *end = *head;

	newnode = malloc(sizeof(list_t));
		if (newnode)
		{
			if (*head == NULL)
			{
				*head = newnode;
			}
			else
			{
				while (end->next != NULL)
				{
					end = end->next;
					end->next = newnode;
				}
			}
		newnode->next = NULL;
		newnode->len = strlen(str);
		newnode->str = strdup(str);
		}
		return (newnode);
}
