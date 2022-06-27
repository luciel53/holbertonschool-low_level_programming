#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *_calloc - function
* @nmemb: operator
* @size: operator
* Return: s or null
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int i, j;
char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	return (s);

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			return (s);
		}
	}
return (s);
}
