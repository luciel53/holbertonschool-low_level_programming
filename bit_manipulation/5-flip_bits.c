#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - function returns n° of bits need to flip from number to another
 * @n: first number
 * @m: second number
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit = 0, i;

	for (i = n ^ m ; i != 0 ; i = i >> 1)
	{
		bit += i & 1;
	}
	return (bit);
}
