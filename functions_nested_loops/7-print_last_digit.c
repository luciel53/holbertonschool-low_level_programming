#include "main.h"
/**
* print_last_digit - function
* @n: operator
* Return: the last digit
*/
int print_last_digit(int n)
{
n = (n % 10);
if (n < 0)
{
	n = (-1) * n;
}
	_putchar (n + '0');
return (n);
}
