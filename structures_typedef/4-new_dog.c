#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - lenght of name & owner
 * @s: donde copia name y owner
 * Return: NULL
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
		return (count);
}
/**
 * new_dog - function that creates a new dog
 * @name: what the dog is called
 * @age: years of the dog
 * @owner: who the dog belongs to
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, lename, lenowner;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	lename = _strlen(name);
	lenowner = _strlen(owner);

	p->name = malloc(lename + 1);
		if (p->name == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}
	p->owner = malloc(lenowner + 1);
		if (p->owner == NULL)
		{
			free(p->owner);
			free(p->name);
			free(p);
			return (NULL);
		}
	p->age = age;

	for (i = 0; i < lename; i++)
	{
		p->name[i] = name[i];
	}

	p->name[i] = '\0';

	for (j = 0; j < lenowner; j++)
	{
		p->owner[j] = owner[j];
	}
	p->owner[j] = '\0';
	return (p);
}
