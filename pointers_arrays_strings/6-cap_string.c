#include "main.h"

/**
* cap_string - function
* @p: operator
* Return: p
*/

char *cap_string(char *p)
{

int i = 0;

	while (p[i] != '\0')
	{
		i++;
		if (i == 0)
		{
			if (p[i] >= 'a' && p[i] <= 'z')
				p[i] = p[i] - 32;
			continue;
		}
		if (p[i] == (' ' || ',' || ';' || '.' || '!' ||
		p[i] == '?' || '"' || '(' || ')' || '{' || '}'))
		{
			i++;
				if (p[i] >= 'a' && p[i] <= 'z')
				{
					p[i] = p[i] - 32;
					continue;
				}
		}
	}
return (p);
}
