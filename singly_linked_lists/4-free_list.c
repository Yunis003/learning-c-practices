#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 **/
void free_list(list_t *head)
{
	list_t *new_node = head;
	list_t *converter;

	while (new_node != NULL)
	{
		converter = (*new_node).next;
		free((*new_node).str);
		free(new_node);
		new_node = converter;
	}
}
