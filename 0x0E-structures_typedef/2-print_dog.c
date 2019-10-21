#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if(d == NULL)
	{}

	d->name == NULL ? printf("(nil)") : printf("Name: %s\n", d->name);
	d->age == NULL ? printf("(nil)") : printf("Age: %.f", d->age);
	d->owner == NULL ?  printf("(nil)") : printf("Owner: %s\n", d->owner);
}
