#include "main.h"

/**
* times_table - function
*
* Return: void
*/
void times_table(void)
{
int lines = 0;
int columns = 0;
int result = 0;
	for (lines = 0 ; lines < 10 ; lines++)
	{
		_putchar ('0');

		for (columns = 1 ; columns < 10 ; columns++)
		{
			result = lines * columns;
				if (result < 10)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (result % 10 + '0');
				}
				if (result >= 10)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (result / 10 + '0');
					_putchar (result % 10 + '0');
				}
		}
		_putchar (10);
	}
}
