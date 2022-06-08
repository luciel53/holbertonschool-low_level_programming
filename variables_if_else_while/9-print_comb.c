#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int num;
for (num = 0 ; num <= 9 ; num++)
{
putchar((num) + '0');
putchar(',');
putchar(' ');
if (num == 0)
continue;
}
putchar('\n');
return (0);
}
