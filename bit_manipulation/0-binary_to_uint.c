#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - A fonction that converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	unsigned int i = 0;

		for (conv = 0 ; *b ; b++)
		{
			if (b[i] == '1')
			{
				conv = (conv << 1) | 1;
			}
			else if (b[i] == '0')
			{
				conv = conv << 1;
			}
			else
			{
				return (0);
			}
		}
		return (conv);
}
