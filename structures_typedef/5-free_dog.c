#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: pointer and operator
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
