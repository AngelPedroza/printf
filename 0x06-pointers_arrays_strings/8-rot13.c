#include "holberton.h"

/**
 * rot13 - encodes a string using rot 13
 *
 * @s: the string to evaluate
 * Return: string
 */

char *rot13(char *s)
{
	char abc[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
			if (s[i] == abc[j])
			{
				s[i] = rot[j];
				break;
			}


	}
	return (s);
}
