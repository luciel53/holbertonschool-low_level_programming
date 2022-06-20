#include "main.h"

/**
* _pow_recursion - function
* @x: operator
* @y: operator
* Return: result
*/

int _pow_recursion(int x, int y)
{
int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		result = x *  _pow_recursion(x, y - 1);
	}
return (result);
}
