#include "main.h"

/**
* _strchr - function
* @s: operator
* @c: operator
* Return: Always 0
*/

char *_strchr(char *s, char c)
{

int i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (c == '\0')
		{
			return (0);
		}
		else
		{
			return (s);
		}
	}
return (0);
}
