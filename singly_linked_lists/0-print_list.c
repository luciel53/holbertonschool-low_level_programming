#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
* @h: head node
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

		while (h != NULL)
		{
			/* head retrieve object pointed str*/
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
				printf("%d %s\n", h->len, h->str);
			h = h->next;
			i++;
		}

return (i);
}
