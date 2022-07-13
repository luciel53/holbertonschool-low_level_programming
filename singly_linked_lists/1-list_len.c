#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
* @h: head node
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

		while (h != NULL)
		{
			h = h->next;
			i++;
		}

return (i);
}
