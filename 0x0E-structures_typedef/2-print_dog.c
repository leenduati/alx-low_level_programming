#include "dog.h"
#include <stdio.h>

/**
 *print_dog - creates a new child struct from parent struct
 *@d: new child struct from parent dog
 *Return: void
 */



void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
