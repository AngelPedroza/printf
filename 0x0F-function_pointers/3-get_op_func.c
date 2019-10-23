#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function corresponing to char entered
 *
 * @s: the char entered
 * Return: ponter to the appropriate function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op[0] != s[0])
	{
		i++;

	}

	if (i == 5)
	{
		printf("Error\n");
		exit(99);
	}

	return (ops[i].f);
}
