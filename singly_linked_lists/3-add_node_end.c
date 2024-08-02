#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head node
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
	list_t *final;
	
	node_end = malloc(sizeof(list_t));
	if (node_end == NULL)
	{
		return (NULL);
	}
	(*node_end).str = strdup(str);
	if ((*node_end).str == NULL)
	{
		free(node_end);
		return (NULL);
	}
	(*node_end).len = 0;
	while (str[(*node_end).len] != '\0')
	{
		(*node_end).len++;
	}
	node_end->next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}
	else
	{
		final = *head;
		while ((*final).next != NULL)
		{
			final = (*final).next;
		}

	(*final).next = node_end;
	}
	return (node_end);
}
