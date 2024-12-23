#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head node
 * Return: number of elements in the node
 **/
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = (*h).next;
		num++;
	}
	return (num);
}
