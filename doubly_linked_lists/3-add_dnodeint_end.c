#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_dnodeint_end - add node at the end of the a dlistint_t list
 * @head: pointer to the head node
 * @n: pointer to the added integer
 * Return: address of new_node or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_end, *last;

	node_end = malloc(sizeof(dlistint_t));

	if (node_end == NULL)
	{
		return (NULL);
	}
	(*node_end).n = n;
	(*node_end).next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
		(*node_end).prev = NULL;
	}
	else
	{
		last = *head;
		while ((*last).next != NULL)
		{
			last = (*last).next;
		}
		(*last).next = node_end;
		(*node_end).prev = last;
	}
	return (node_end);

}
