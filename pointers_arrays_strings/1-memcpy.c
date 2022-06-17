#include "main.h"

/**
* _memcpy - function
* @dest: operator
* @src: operator
* @n: operator
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		src[i] = *dest;
	}
return (dest);
}
