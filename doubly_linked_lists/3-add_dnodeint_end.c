#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint_end - function that adds new node at the beginning of a list.
 * @head: double pointer to head
 * @n: data
 * Return: number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	/* allocate node*/
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	last_node = *head;

	/* give data to the new node*/
	new_node->n = n;

	/* new node will be the last node */
	new_node->next = NULL;

	/* if list empty, new node is head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* else, go to the last node */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* change the next of last node */
	last_node->next = new_node;

	/* make last node as previous of new node */
	new_node->prev = last_node;

	return (new_node);

}
