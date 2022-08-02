#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to init. a struct dog variable
 * @d: name of variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
