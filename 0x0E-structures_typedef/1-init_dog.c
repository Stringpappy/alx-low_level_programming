#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise a variable type struct dog
 * @d: pointer to dog info
 * @name: name to be initialised
 * @age: age tobe initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
