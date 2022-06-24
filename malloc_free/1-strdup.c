#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - function
*
* Return: 
*/

char *_strdup(char *str)
{
int i;
int y;
char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
	{
	}

	s = malloc((sizeof(char) * i));

	for (y = 0 ; y < i ; y++)
	{
		s[y] = str[i];
	}

	if (s == NULL)
	{
		return (NULL);
	}
	s[y] = '\0';
	return (s);
}

