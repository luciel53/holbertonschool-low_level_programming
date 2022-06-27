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

unsigned int i = 0, j = 0;
char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		i++;
		s[i] = 0;
	}
return (s);
}
