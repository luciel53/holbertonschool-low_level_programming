#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: double pointer head to head node
 * @index: operator unsigned int
 * Return: new_node or NULL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		free(*head);
	}

	return (1);

}
