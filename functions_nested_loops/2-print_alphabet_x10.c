#include "main.h"
/**
* print_alphabet_x10 - lowercase alphabet 10x
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
while (ch < 'z')
{
ch++;
}
}
_putchar('\n');
}
