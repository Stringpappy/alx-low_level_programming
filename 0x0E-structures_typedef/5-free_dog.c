#include "dog.h"

/**
 * free_dog - func that frees dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
