#include "function_pointers.h"

/**
 * print_name - prints the name accorrding to the function invoked as 2nd arg
 *
 * @name: the name to print
 * @f: pointer to the function to use.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
