#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint - function that adds new node at the beginning of a list.
 * @head: pointer to head
 * @n: data
 * Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
