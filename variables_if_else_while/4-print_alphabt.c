#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
if ((ch == 'd') || (ch == 'p'))
{ch++; }
{
putchar('\n');
}
}
return (0);
}
