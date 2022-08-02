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


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
