#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *_strdup - function
* @str: operator and pointer
* Return: s
*/

char *_strdup(char *str)
{
int i = 0;
int y = 0;
char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i + 1));

	if (s == NULL)
		return (NULL);

	while (y < i)
	{
		s[y] = str[y];
		y++;
	}

	s[y] = '\0';
	return (s);
}
