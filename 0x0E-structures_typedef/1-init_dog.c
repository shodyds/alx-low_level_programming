#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function initialize dog
 * @d: address of struct dog var
 * @name: input value
 * @age: input value
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
