#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - function
* @s1: operator and pointer
* @s2: operator and pointer
* Return: s1
*/

char *str_concat(char *s1, char *s2)
{

int length = 0;
int i;

	s1 = malloc(sizeof(char) * *s1);
	s2 = malloc(sizeof(char) * *s2);

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	while (s1[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; s2[i]; i++, length++)
	{
		s1[length] = s2[i];
	}

	s1[length] = '\0';
	return (s1 + 0);

}
