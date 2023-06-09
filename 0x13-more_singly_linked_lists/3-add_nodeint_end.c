#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at the end of a list
 * @head: The head of the list
 * @n: The integer
 *
 * Return: if success, the addrerss of the new element
 * else, NULL if failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
