#include "dog.h"

/**
 * init_dog - Function initialize dog
 * @name: input value
 * @age: input value
 * owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		d = malloc(sizeof(struct));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
