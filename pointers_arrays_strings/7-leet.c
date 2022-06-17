#include "main.h"

/**
* leet - function
* @c: operator
* Return: c
*/
char *leet(char *c)
{
char letter[] = "aeot1AEOTL";
char num[] = "4307143071";
int i, x;
	while (c[i] != '\0')
	{
		i++;
		for (x = 0 ; letter[x]; x++)
		{
			if (c[i] == letter[x])
			{
				c[i] = num[x];
			}
		}
	}
return (c);
}
