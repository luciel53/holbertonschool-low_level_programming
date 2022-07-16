#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes head node of a listint_t linked list
 * @head: double pointer head to head node
 * Return: n
 */

int pop_listint(listint_t **head)
{
	/* temp is used to freeing the memory */
		listint_t *temp;
		int del;

		if (*head == NULL)
			return (0);

		temp = *head;
		del = (*head)->n;
		*head = (*head)->next;
		free(temp);

return (del);
}
