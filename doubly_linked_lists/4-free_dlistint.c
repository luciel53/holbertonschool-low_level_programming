#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to head
 * Return: .
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		head = temp;
		free(head);
	}
}
