#include "main.h"

/**
* _strncat - function
* @dest: operator
* @src: operator
* @n: operator
* Return: dest + 0
*/

char *_strncat(char *dest, char *src, int n)
{

int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	;
	}
	for (j = 0 ; src[j] != 0 ; j++, i++)
	{
		if (n > j)
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

return (dest + 0);
}
