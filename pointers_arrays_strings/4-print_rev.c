#include "main.h"

/**
* print_rev - function
* @s: operator
* return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
	}
	for (; i >= 0 ; i--)
	{
		_putchar (s[i]);
	}
	_putchar(10);
}

