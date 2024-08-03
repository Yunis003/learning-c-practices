#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed = head;
	dlistint_t *new;

	while (freed != NULL)
	{
		new = (*freed).next;
		free(freed);
		freed = new;
	}
}
