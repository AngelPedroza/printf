#include "holberton.h"

/**
 * cap_string - capitalizes first letter
 *
 * @s: the string to evaluate.
 * Return: String
 */

char *cap_string(char *s)
{

	char sym[] = {'\n', ' ', '\t', ',', ';', '.',
		      '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sym[j] != '\0'; j++)
		{
			if (s[i] == sym[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
			else if (s[0] >= 'a' && s[0] <= 'z')
				s[0] -= 32;
		}
	}
	return (s);
}
