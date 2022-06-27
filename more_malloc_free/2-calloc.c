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

	j = nmemb * size;
	s = malloc(j);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = 0;
		i++;
	}
return (s);
}
