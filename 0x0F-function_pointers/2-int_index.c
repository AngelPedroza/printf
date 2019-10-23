#include "function_pointers.h"

/**
 * int_index - returns the position in which a match is found i.e. return is 1
 *
 * @array: array to look into
 * @size: the size of the array
 * @cmp: the function to use to discriminate
 * Return: position in i, -1
 */



int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index == 1)
				return (i);

		}
	}
	return (-1);
}
