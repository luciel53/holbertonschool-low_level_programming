#include "main.h"
/**
* _isalpha - function test an integer value
* @c: operator
* Return: Always 1
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
	else
		return (0);
}
