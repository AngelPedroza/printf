#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - returns the lenght of a strin
 *
 * @s: the string to evaluate
 * Return: lenght
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	return (i);
}


/**
 * argstostr - concatenates all the arguments of program
 *
 * @ac: argument count
 * @av: argument vector
 * Return: new string concatenated
 */

char *argstostr(int ac, char **av)
{
	char *narr;
	int i, j, len;


	if (ac == 0)
		return (NULL);
	else if (av == NULL)
		return (NULL);


	for (i = 0; i < ac ; i++)
	{
		len += _strlen(av[i]);
	}

	narr = malloc((len + ac) * sizeof(char));
	if (narr == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			narr[len] = av[i][j];
			len++;

		}
		narr[len] = '\n';
		len++;
	}

	if (narr == NULL)
		return (NULL);



	return (narr);

}
