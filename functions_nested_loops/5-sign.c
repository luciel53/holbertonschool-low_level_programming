#include "main.h"
/**
* int print_sign(int n)
*
* Return: 0 if n = 0 and 1 if n < or > 0
*/
int print_sign(int n)
{
if (n > '0')
{
	_putchar('+');
	return (1);
}
else
	if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
else
	if (n == '0')
	{
		_putchar(0);
		return (0);
	}
return (0);
}
