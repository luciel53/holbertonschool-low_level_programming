#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * @brief Get the op func object
 *
 * @param s
 * @return int(*)(int, int)
 */

int (*get_op_func(char *s))(int, int)
{
	    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

	if (strcmp(s, ops->op[i] == 0))
	{
	while (i <= 4)
	{
		get_op_func(s);
		i++;
	}
	}
return (0);
}
