#include "main.h"
/**
* int _islower(int c) - the _islower function
*
* Return: 1 if lowercase and 0 if other
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
