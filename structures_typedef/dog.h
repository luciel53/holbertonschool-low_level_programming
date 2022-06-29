#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure
* @name: operator and pointer
* @owner: operator and pointer
* @age: operator
* description: define new type struct dog
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
