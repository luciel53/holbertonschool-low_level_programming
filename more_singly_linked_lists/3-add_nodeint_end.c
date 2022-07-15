#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end - A function that adds new node at the end of a listint_t
 * @head: double pointer head to head node
 * @n: integer value of a new node
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new_node, *temp;
		int n1 = n;

		/*allocate new node*/
		new_node = malloc(sizeof(listint_t));

		new_node->n = n1;
		new_node->next = NULL;

		/* if head is NULL, it's an empty list */
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
