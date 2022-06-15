#include <stdio.h>
#include "main.h"

/**
* _puts - function
* @str: operator
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*(str + 0));
		str++;
	}
_putchar (10);
}
