#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @n: operator
 * @separator: pointer and operator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s = 0;

	if (s == 0)
		s = "";
	if (n > 0)
	{
		va_start(list, n);
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(list, int));
				if (separator != NULL && i != n - 1)
				{
					printf("%s", separator);
				}
		}
		va_end(list);
	}

	printf("\n");
}
