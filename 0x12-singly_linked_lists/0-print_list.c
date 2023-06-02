#include "lists.h"
#include <stdio.h>

/**
 * print_list -  A function that prints all the elements of a list_t list
 * @h: The element involved
 *
 * Return: the number of nodes itself
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
