#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts new node at given position
 * @head: double pointer head to head node
 * @n: val of new node
 * @idx: operator unsigned int
 * Return: new_node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(new_node));
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
