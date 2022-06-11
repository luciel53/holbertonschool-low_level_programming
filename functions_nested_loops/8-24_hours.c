#include "main.h"
/**
* jack_bauer - function
* Function that prints every minute of the day of Jack Bauer
* Return : void
*/
void jack_bauer(void)
{
int hour = 0;
int min = 0;

for (hour = 0 ; hour < 24 ; hour++)
{
	for (min = 0 ; min < 60 ; min++)
	{
		_putchar (hour / 10 + '0');
		_putchar (hour % 10 + '0');
		_putchar (58);
		_putchar (min / 10 + '0');
		_putchar (min % 10 + '0');
	}
}
}
