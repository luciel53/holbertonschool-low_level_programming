#include <stdio.h>
#include "main.h"

/**
* swap_int - function
*
* Return: void
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
