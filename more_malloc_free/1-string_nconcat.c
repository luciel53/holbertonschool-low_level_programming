#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concatenates 2 strings
* @s1: operator and pointer
* @s2: operator and pointer
* @n: operator
* Return: s or null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *s;
unsigned int i = 0, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= l)
	{
		j = i + l;
	}
	else
	{
		j = i + n;
	}

	s = malloc(sizeof(char) * j + 1);

	if (!s)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		s[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
