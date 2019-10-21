#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: First member dog's name
 * @age: Second member dog's age
 * @owner: Third member dog's owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
