#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - function
 * @name: pointer and operator
 * @owner: pointer and operator
 * @age: operator
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *newdog;

	namelen = ownerlen = 0;

	/*copy*/
	while (name[namelen])
		namelen++;
	while (owner[ownerlen])
		ownerlen++;

	/*allocate newdog*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	/*initialization*/
	newdog->name = malloc(namelen * sizeof(newdog->name));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; i < namelen; i++)
		newdog->name[i] = name[i];

	newdog->age = age;

	newdog->owner = malloc(ownerlen * sizeof(newdog->owner));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; i < ownerlen; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
