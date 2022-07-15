#include "lists.h"
/**
 * add_node - adds a node at the beggining
 * @head: beggining of the list
 * @str: string
 * Return: newnode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
	newnode->next = *head;
	newnode->len = strlen(str);
	newnode->str = strdup(str);
	*head = newnode;

	return (newnode);
}
