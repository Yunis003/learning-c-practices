#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all elements of the list_t list
 * @h: pointer to our head node
 * Return: count of the nodes
 **/
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		counter++;
	}
	return (counter);
}
