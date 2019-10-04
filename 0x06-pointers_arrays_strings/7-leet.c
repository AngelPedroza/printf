#include "holberton.h"

/**
 * leet -  encodes into 1337
 *
 * @s: the string to evaluate
 * Return: string
 */

char *leet(char *s)
{
	char leetn[] = "1133774400";
	char leetc[] = "lLeEtTaAoO";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leetc[j] != '\0'; j++)
			if (s[i] == leetc[j])
				s[i] = leetn[j];
	}
	return (s);
}
