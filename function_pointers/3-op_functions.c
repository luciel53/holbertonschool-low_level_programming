#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function add
 * @a: operator
 * @b: operator
 * Return: Always a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function sub
 * @a: operator
 * @b: operator
 * Return: Always a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function mul
 * @a: operator
 * @b: operator
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function
 * @a: operator
 * @b: operator
 * Return: Always a / b
 */
int op_div(int a, int b)
{
	return (a / b);

	if (a == 0 || b == 0)
		printf("Error\n");
		exit(100);
}

/**
 * op_mod - function modulo
 * @a: operator
 * @b: operator
 * Return: Always a % b
 */
int op_mod(int a, int b)
{
	return (a % b);

	if (a == 0 || b == 0)
		printf("Error\n");
		exit(100);
}
