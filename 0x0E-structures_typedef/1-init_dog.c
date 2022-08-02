#include "dog.h"

/**
 *init_dog - creates a new child struct from parent struct
 *@d: new child struct from parent dog
 *@name: Name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: void
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

