#include "holberton.h"

/**
 *
 *
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	c = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if(s[i] == accept[j])
			{
				c++;
			        break;
			}
		}
		if (s[i] != accept[j])
		{
			break; 
		}
	}
	return (c);
}
