#include "main.h"

/**
* puts2 - function
* @str: operator
* Return: void
*/

void puts2(char *str)
{
int i = 0;
int counter = 0;
		while (str[i])
		{
			counter++;
			i++;
		}
		for (i = 0 ; i < counter ; i++)
		{
			if (i % 2 == 0)
			{
				_putchar (str[i]);
			}
		}
		_putchar ('\n');
}
