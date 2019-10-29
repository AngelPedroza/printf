#include "holberton.h"

/**
 * _printf - Replica of printf
 *
 * @format: Format is the first argument that give all the parameters that
 * I will print.
 * Return: Is the len of my final buffer.
 */

int _printf(char *format, ...)
{
	int j, i, *count, val_count = 0;
	char *buffer;
	va_list valist;
	myforspec percentage[] = {
		{"c", _printchar}, {"d", printint}, {"i", printint}, {"o", printoctal},
		{"s", printstr}, {"x", printhexa}, {"X", printhexa}, {"b", printbin},
		{"u", printunsigned}, {"%", PPS}, {NULL, NULL}
	};
	va_start(valist, format);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	count = &val_count;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			moveinto_buffer(buffer, format[i], count);
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			for (j = 0; percentage[j].sp != NULL; j++)
			{
				if (percentage[j].sp[0] == format[i + 1])
				{
					percentage[j].f(valist, buffer, count);
					i++;
					break;
				}
			}
			if (percentage[j].sp == NULL)
				moveinto_buffer(buffer, format[i], count);
		}
	}
	if (*count != 1024)
		write(1, buffer, *count);
	free(buffer);
	va_end(valist);
	return (*count);
}

/**
 * moveinto_buffer - Functions that replace the argumentes into the buffer.
 * @buffer: My dest.
 * @c: That to put in dest.
 * @count: The position of my buffer.
 */

void moveinto_buffer(char *buffer, char c, int *count)
{
	buffer[*count] = c;
	*count += 1;
	if (*count == 1024)
	{
		write(1, buffer, *count);
		*count = 0;
	}
}

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
	char Representation[] = "0123456789ABCDEF";
	char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
