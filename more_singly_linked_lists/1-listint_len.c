#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - A function that prints all elements in a list_t list
 * @h: head
 * Return: i
 */

size_t listint_len(const listint_t *h)
{
		int i = 0;

		while (h)
		{
			i++;
			h = h->next;
		}

return (i);
}
