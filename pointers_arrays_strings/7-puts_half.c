#include "main.h"

/**
* puts_half - function
* @str: operator
* Return: void
*/

void puts_half(char *str)
{
int i = 0;
int x;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		x = (i - 1) / 2;
		x = x + 1;
	}
	else
	{
		x = i / 2;
	}

	for (; x < i; x++)
	{
		_putchar(str[x]);
	}

	_putchar(10);
}
