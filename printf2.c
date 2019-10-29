#include "holberton.h"


void moveinto_buffer(char *buffer, char c, int position)
{
	if (position > 0)
	{
		buffer[position + 1] = c;
	}
	buffer[position] = c;
}
int _printf(char *format,...)
{
	int j, i, k, h;
	int len_of_the_final_buffer, len_for_concat, count_buffer, res;
	char *traverse, *buffer, *pointer_for_concat;
	va_list valist;

	myforspec percentage[] = {
		{"c", _printchar},
		{"d", printint},
		{"i", printint},
		{"o", printoctal},
		{"s", printstr},
		{"x", printhexa},
		{"b", printbin},
		{NULL, NULL}
	};

	va_start(valist, format);
	buffer = malloc(1024);
	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			moveinto_buffer(buffer, format[i], i);
		}
		if(format[i] == '%' && format[i + 1] != '\0')
		{
			for(j = 0; percentage[j].sp != NULL; j++)
			{
				if (percentage[j].sp[0] == format[i + 1])
				{
					h = i;
					percentage[j].f(valist, buffer, h);
				}
			}
		}
	 }
	len_of_the_final_buffer = _strlen(buffer);
	write(1, buffer, len_of_the_final_buffer);
	va_end(valist);
	return (len_of_the_final_buffer);
}
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/*Revisar si dejar el puntero en esta funcion*/
int _printchar(va_list valist, char *buffer, int i)
{
	int j = i;
	char c = va_arg(valist,int);

	moveinto_buffer(buffer, c, j);
	return (0);
}
int printstr(va_list valist, char *buffer, int i)
{
	int j = i;
	int it, len;
	char *s;

	s = va_arg(valist, char *);
	len = _strlen(s);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, s[it], j);
	}
	return (0);
}
int printint(va_list valist, char* buffer, int i)
{
	int j = i;
	int it, len;
	char *res_int;

	i = va_arg(valist,int);
	res_int = convert(i, 10);
	len = _strlen(res_int);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_int[it], j);
	}
	return(0);
}
int printoctal(va_list valist, char* buffer, int i)
{
	int j = i;
	int it, len;
	char *res_octal;

	i = va_arg(valist, unsigned int);
	res_octal = convert(i, 8);
	len = _strlen(res_octal);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_octal[it], j);
	}

	return (0);
}
int printhexa(va_list valist, char* buffer, int i)
{
	int j = i;
	int it, len;
	char *res_hexa;

	i = va_arg(valist,unsigned int);
	res_hexa = convert(i, 16);
	len = _strlen(res_hexa);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_hexa[it], j);
	}
	return (0);

}

int printbin(va_list valist, char* buffer, int i)
{
	int j = i;
	int it, len;
	char *res_bin;

	i = va_arg(valist, unsigned int);
	res_bin = convert(i, 2);
	len = _strlen(res_bin);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_bin[it], j);
	}
	return (0);

}

char *convert(unsigned int num, int base)
{
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return(ptr);
}

/* if (percentage[j].sp == NULL) */
			/* { */
			/* 	free(buffer); */
			/* 	exit(-1); */
			/* } */
			/* pointer_for_concat = &percentage[j].f; */
			/* if (pointer_for_concat != NULL) */
			/* 	percentage[j].f(valist); */
			/* len_for_concat = _strlen(pointer_for_concat); */
			/* count_buffer = 0; */
			/* k = 0; */
			/* while(count_buffer < len_for_concat) */
			/* { */
			/* 	buffer[i++] = pointer_for_concat[k]; */
			/* 	count_buffer++; */
			/* 	k++; */
			/* } */
