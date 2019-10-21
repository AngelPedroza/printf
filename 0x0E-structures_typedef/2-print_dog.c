#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if(d == NULL)
	{}

	d->name == NULL ? printf("(nil)") : printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("(nil)");
	else
		printf("Age: %f\n", d->age);
	d->owner == NULL ?  printf("(nil)") : printf("Owner: %s\n", d->owner);
}
