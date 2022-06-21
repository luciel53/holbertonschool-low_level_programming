#include "main.h"

/**
* _strstr - function
* @haystack: operator
* @needle: operator
* Return: haystack or 0
*/

char *_strstr(char *haystack, char *needle)
{

int i = 0;
int x = 0;
	if ((*haystack == '\0') || (*needle == '\0'))
		return (0);
	while (*haystack)
	{
		if (haystack[i] == needle[x])
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
