#include "main.h"
/**
* _islower(int c) - the _islower function
*
* Return: Always 0
*/
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
