#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include "2-strlen.c"
#include "9-strcpy.c"

/**
 * new_dog -function
 * @name: pointer
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggi = malloc(sizeof(dog_t));

	if (doggi == NULL)
		return (NULL);

	doggi->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (doggi->name == NULL)
	{
		free(doggi);
		return (NULL);
	}

	doggi->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (doggi->owner == NULL)
	{
		free(doggi->name);
		free(doggi);
		return (NULL);
	}

	doggi->name = _strcpy(doggi->name, name);
	doggi->age = age;
	doggi->owner = _strcpy(doggi->owner, owner);

	return (doggi);
}
