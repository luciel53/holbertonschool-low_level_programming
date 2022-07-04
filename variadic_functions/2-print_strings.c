#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 * @n: operator
 * @separator: pointer and operator
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s = 0;

	if (separator == 0)
		s = "";
	if (n > 0)
	{
		va_start(arg, n);
		for (i = 0 ; i < n ; i++)
		{
			s = va_arg(arg, char*);
			if (s != NULL)
			{
				printf("%s", s);

				if (separator != NULL && i != n - 1)
				printf("%s", separator);
			}
			else
			{
				printf("nil");
			}
		}
		va_end(arg);

	printf("\n");
	}
}
