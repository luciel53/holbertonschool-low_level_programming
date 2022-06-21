#include "main.h"

/**
* _strpbrk - function
* @s: operator
* @accept: operator
* Return: s or 0
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int x = 0;
	if ((*s == '\0') || (*accept == '\0'))
		return (0);
	while (*s)
	{
		if (s[i] == accept[x])
		{
			return (s);
		}
		else
		{
			s++;
			accept++;
		}
	}
	return (0);
}
