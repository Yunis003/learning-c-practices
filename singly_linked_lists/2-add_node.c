#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head node
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	(*node).str = strdup(str);
	if ((*node).str == NULL)
	{
		free(node);
		return(NULL);
	}
	while (*str != '\0')
	{
		str++;
		len++;

	}
	(*node).len = len;
	(*node).next = *head;

	*head = node;
	return(node);
	
}
