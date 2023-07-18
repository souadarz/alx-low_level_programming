#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -function
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: nothings
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
