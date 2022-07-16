#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: pointer head to head node
 * Return: sum of n or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

		if (head == NULL)
			return (0);

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
return (sum);
}
