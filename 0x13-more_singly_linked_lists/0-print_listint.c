#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: The first element of the list
 *
 * Return: The number of the nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 1;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
