#include "holberton.h"

int (*get_func_porc(char s))(va_list list)
{
	specify porcentaje[] = {
		{"s", printstring},
		{"c", printchar}.
		{NULL, NULL}
	};
	int i;

	for (i = 0; *porcentaje[i].c != NULL; i++)
	{
		if (s == porcentaje[i].c)
		{
			porcentaje[i].f(list);
			return (1);
		}
	}
	return (0);
}
void (*get_func_back(char s))(void)
{
	specify BackSlash[] = {
		{"n", printnewline}
	};
	for (i = 0; s != porcentaje[i].c; i++)
}
