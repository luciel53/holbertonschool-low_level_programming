#include "main.h"

/**
* _sqrt -function
* @n: operator
* @i: operator
* Return: i, -1 or (_sqrt(n, i + 1)
*/
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - function
* @n: operator
* Return: _sqrt(n,1)
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}
