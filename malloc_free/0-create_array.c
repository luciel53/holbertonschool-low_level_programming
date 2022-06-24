#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - function
* @size: operator and pointer
* @c: operator
* Return: str
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
	str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
	if (size > 0)
		for (i = 0 ; i < size ; i++)
		{
			str[i] = c;
		}
		else
		{
			return (NULL);
		}
return (str);
}
