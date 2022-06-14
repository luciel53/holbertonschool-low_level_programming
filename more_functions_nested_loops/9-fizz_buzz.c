#include <stdio.h>
#include "main.h"

/**
* main - function
*
* Return: void
*/

int main(void)
{
int i;

	for (i = 1 ; i <= 100 ; i++)
	{

		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	putchar (' ');
	}
putchar (10);
return (1);
}
