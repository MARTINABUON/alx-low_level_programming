#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initializes the dog's owner, name, and age
 * @d: a pointer to struct dog
 * @name: the name of the dog inittialised
 * @owner: Dog's owner
 * @age: the dog's age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
