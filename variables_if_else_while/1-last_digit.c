#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
puts("and is greater than 5");
else if (n % 10 == 0)
puts("and is 0");
else if (n % 10 < 6 != 0)
puts("and less than 6 and not 0");
	return (0);
}
