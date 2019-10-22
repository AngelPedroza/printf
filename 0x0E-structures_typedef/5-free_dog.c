#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 *
 * @d: the dog_t typedef structure to free
 */

void free_dog(dog_t *d)
{
	if(d != NULL)
		free(d);
}
