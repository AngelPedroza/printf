#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 *
 * @s: the string to be evaluated
 */

void rev_string(char *s)
{
	int i;
	int len;
	int begp, endp;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	begp = 0;
	len -= 1;
	endp = len;

	for (i = 0; i < len / 2; i++)
	{
		c = s[endp];
		s[endp] = s[begp];
		s[begp] = c;
		begp++;
		endp--;
	}
}
