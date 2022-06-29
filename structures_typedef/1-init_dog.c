#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -function
 * @name: pointer and operator
 * @age: operator
 * @owner: pointer and operator
 * @d: pointer
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d != NULL)

		d->name = name;
		d->age = age;
		d->owner = owner;
}
