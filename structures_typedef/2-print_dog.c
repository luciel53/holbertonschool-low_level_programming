#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: pointer and operator
 * Return: void
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "Name: (nil)";
	if (d->owner == NULL)
		d->owner = "Owner: (nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
