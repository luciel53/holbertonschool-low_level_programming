#include "main.h"

/**
* _strspn - function
* @s: operator
* @accept: operator
* Return: count
*/

unsigned int _strspn(char *s, char *accept)
{

int i;
int count = 0;

	for (i = 0 ; i < *accept ; i++)
	{
		if (count == *s)
		{
			break;
		}
		if (accept[i] == s[count])
		{
			count++;
		}
	}
return (count);
}
