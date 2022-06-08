#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int i;
for (i = '0' ; i <= '9' ; i++)
{
putchar((i % 10) + 'i');
if (i == 0)
continue;
putchar(',');
putchar('\n');
}
return (0);
}
