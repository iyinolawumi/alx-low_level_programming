#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: The number to be stored in the list
 *
 * Return: if success, address of te new element
 * else NULL
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
