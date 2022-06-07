#include <stdio.h>
#include <bits/libc-header-start.h>
#define PRINTSIZE(Type) printf("sizeof " #Type " is %zu\n", sizeof(Type))
PRINTSIZE(int);
PRINTSIZE(long);
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char : % zu\n", sizeof(char));
printf("Size of a an int : % zu\n", sizeof(int));
printf("Size of a long int : % zu\n", sizeof(long int));
printf("Size of a long long int : % zu\n", sizeof(long long int));
printf("Size of a float : % zu\n", sizeof(float));
return (0);
}
