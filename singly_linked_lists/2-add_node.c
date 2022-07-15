#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - A function that adds a new node at the beginning of a list
 * @head: head node
 * @str: string to duplicate
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
		char *copy;
		list_t *new_node;
		int i = 0;
		int length = 0;

		/* copy of str */
		copy = strdup(str);

		while (*str)
		{
			i++;
			str++;
		}

		if (copy == NULL)
			return (NULL);

		/*allocate new node*/
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->str = copy;
		new_node->len = length;
		new_node->next = *head;
		*head = new_node;

return (new_node);
}
