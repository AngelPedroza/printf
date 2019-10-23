#include "function_pointers.h"

/**
 * array_iterator - performs an action on an array
 *
 * @array: the array in which to perform the action
 * @size: the size of the array
 * @action: pointer to a function that performs the action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
