#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: a pointer to the head of list_t list
 * @str: a string to be duplicated
 * Return: address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int len;
	list_t *new;

	new = (list_t *)(malloc(sizeof(list_t)));
	if (new == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	len = strlen(dup);

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
