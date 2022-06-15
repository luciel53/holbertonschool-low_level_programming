#include <stdio.h>
#include "main.h"

/**
* swap_int - function
* @a: operator
* @b: operator
* Return: void
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
