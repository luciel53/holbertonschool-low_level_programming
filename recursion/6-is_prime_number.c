#include "main.h"

/**
* is_prime_number - function
* @n: operator
* Return: n,2
*/

int is_prime_number(int n)
{

		if (n % 2 == 0)
		{
			return (0);
		}
		if (n / 2 == 0)
		{
			return (0);
		}
		else
		{
		return (1);
		}
}
