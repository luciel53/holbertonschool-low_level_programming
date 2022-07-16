#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth node of a listint_t
 * @head: pointer head to head node
 * @index: operator unsigned int
 * Return: n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

		unsigned int i = 0;


		for (i = 0 ; i < index ; i++)
		{
			if (head == NULL)
				return (NULL);
			head = head->next;
		}

return (head);
}
