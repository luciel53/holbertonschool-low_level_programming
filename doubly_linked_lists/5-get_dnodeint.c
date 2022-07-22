#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head
 * @index: the index of the node, starting from 0
 * Return: number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (0);
		index--;
		head = head->next;

	}
	return (head);
}
