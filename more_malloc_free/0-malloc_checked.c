#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - function
* @b: operator
* Return: void
*/

void *malloc_checked(unsigned int b)
{

void *p;

	p = malloc(b);

		if (!b)
			exit(98);
		return (p);
}
