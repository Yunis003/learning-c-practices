#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *show = h;
	size_t current = 0;

	while (current != NULL)
	{
		printf("%d\n", (*show).n);
		show = (*show).next;
		current++;
	}
	return (current);
}
