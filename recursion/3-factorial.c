#include "main.h"

/**
* factorial - function
* @n: operator
* Return: -1 or 1 or n * factorial(n - 1)
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
return (n * factorial(n - 1));
}
