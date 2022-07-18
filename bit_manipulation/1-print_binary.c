#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: pointer to a string
 * Return: converted number or 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar ((n & 1) + '0');
}
