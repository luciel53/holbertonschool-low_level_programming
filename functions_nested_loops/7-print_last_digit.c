#include "main.h"
/**
* int print_last_digit(int n)
*
* Return n
*/
int print_last_digit(int n)
{
while (n >= 10)
{
	n = n / 10;
}
return (n);
}
