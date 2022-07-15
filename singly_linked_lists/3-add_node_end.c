#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - A function that adds a new node at the end of a list
 * @head: head node
 * @str: string to duplicate
 * Return: the number of nodes.
 */

list_t *add_node_end(list_t **head, const char *str)
{
		char *copy;
		list_t *new_node, *temp;
		int length2 = 0;
		int length1 = 0;

		/* copy of str */
		copy = strdup(str);

		while (*str)
		{
			length2++;
			str++;
		}
		length1 = length2;
		if (copy == NULL)
			return (NULL);

		/*allocate new node*/
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);
		new_node->str = copy;
		new_node->len = length1;
		new_node->next = NULL;

		if (*head == NULL)
			*head = new_node;
		else
		{
			temp = *head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
		}
return (new_node);
}
