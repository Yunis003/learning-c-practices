#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 **/
void free_list(list_t *head)
{
	list_t *new_node;
	list_t *converter;
	new_node = head;

	while (new_node != NULL)
	{
		(*new_node).next = converter;
		free((*new_node).str);
		free(new_node);
		converter = new_node;
	}
}
