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
	unsigned int i;

	for (i = (1 << 10) ; i > 0 ; i = (i >> 1))
	{
		if (n & i)
				_putchar('1');
			else
				_putchar('0');
	}
}
