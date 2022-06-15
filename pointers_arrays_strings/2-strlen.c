#include <stdio.h>
#include "main.h"

/**
* _strlen - function
* @s: operator
* Return: *s
*/

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
	length++;
	s++;
}
return (length);
}
