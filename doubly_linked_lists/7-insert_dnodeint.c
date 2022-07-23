#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index - function that inserts new node at given position
 * @h: double pointer to head
 * @idx: index
 * @n: data
 * Return: address of the new node or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;

	/* allocate node*/
	new_node = malloc(sizeof(dlistint_t));

	/* give data to the new node*/
	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
