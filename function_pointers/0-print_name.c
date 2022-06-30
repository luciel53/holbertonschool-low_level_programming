#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: pointer and operator
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
