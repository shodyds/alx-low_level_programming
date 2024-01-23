#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function initialize dog
 * @name: input value
 * @age: input value
 * @owner: dog owner
 * @d: address of struct dog var
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
