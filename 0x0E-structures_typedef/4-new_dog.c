#include "dog.h"

/**
 * new_dog - func that create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog oner
 * Return:0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mynewdog;

	mynewdog = malloc(sizeof(dog_t));
	if (mynewdog == NULL)
	{
		return (NULL);
	}
	if (mynewdog->name == NULL)
	{
		free(mynewdog);
		return (NULL);
	}
	_strcpy(mynewdog->name, name);
	_strcpy(mynewdog->owner, owner);
	mynewdog->age = age;
	return (mynewdog);
}

