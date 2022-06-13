#include "main.h"

/**
* print_most_numbers - function
*
* Return: void
*/

void print_most_numbers(void)
{
	int x = 0;
		for (x = '0' ; x <= '9' ; x++)
		{
			if (x != '2' && x != '4')
			{
				_putchar (x);
			}
		}
_putchar (10);
}
