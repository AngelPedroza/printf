#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: the name of the struct to print
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{}

	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	d->owner == NULL ?  printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
