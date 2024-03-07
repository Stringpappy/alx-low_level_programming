#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - func that print a struct dog
 *@d: link
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nill)");
	if (d->name == NULL || d->owner == NULL)
		printf(" nill");
	if  (d != NULL)
		printf("Name:%s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner); 
}
