#include "holberton.h"
/**
 * _strlen - get the length of a string
 *
 * @str: the input string
 * Return: length as an integer
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * convert - a multi base converter
 *
 * @num: the input number
 * @base: the numeric base of the output number
 * Return: a pointer to a string containing the new number
 */
char *convert(unsigned int num, int base)
{
	const char Representation[] = "0123456789ABCDEF";
	const char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
