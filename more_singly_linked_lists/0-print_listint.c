#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - A function that prints all elements in a list_t list
 * @h: head
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
		int i = 0;

		while (h != NULL)
		{
			h = h->next;
			i++;
		}

return (i);
}

