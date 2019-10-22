#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - inits a structure with given data in params
 *
 * @d: the given structure name
 * @name: member 1 name property
 * @age: member 2 age propoerty
 * @owner: member 3, owner property
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
