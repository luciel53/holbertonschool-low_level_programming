#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_char - function that print a char
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - function that prints an integer
 * Return: void
 */

	void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - function that prints float
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - function that prints a string
 * Return: void
 */

void print_s(va_list s)
{

	char *string = va_arg(s, char*);
	if (string != NULL)
	{

		printf("%s", string);
	}
	string = ("nil");
}

/**
 * print_all - function that prints anything
 * @n: operator
 * @separator: pointer and operator
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;

	f_t form[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

/**arguments iteration*/
	va_list list;
	char *separator;

	va_start(list, format);
	i = 0;
		while (format[i] && format)
		{
			j = 0;
			while (form[j].p != NULL)
			{
				if (format[i] == (*(form[j].p)))
				{
					printf("%s", separator);
					form[j].f(list);
					separator = ", ";

				}
			j++;
			}
		i++;

		}


	va_end(list);
}
