#include "main.h"

/**
* _strcat - function
* @dest: operator
* @src: operator
* Return: dest + 0
*/

char *_strcat(char *dest, char *src)
{

int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	;
	}
	for (j = 0 ; src[j] != 0 ; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

return (dest + 0);
}
