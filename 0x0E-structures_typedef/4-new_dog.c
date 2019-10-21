#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog :)
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog.
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sptr;

	sptr = malloc(1 * sizeof(dog_t));
	if (sptr == NULL)
		return NULL;
	sptr->name = name;
	sptr->age = age;
	sptr->owner = owner;
	return (sptr);
}
