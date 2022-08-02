#ifndef _dog_H_
#define _dog_H_
/**
 *struct dog - this is a dog
 *@name: first member
 *@age: second member
 *@owner: third member
 *
 *
 *Description: these are the characteristics of a dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
