#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list list;
	int i;

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			get_func_porc(format[i+1])(list);
		}
		else if (format[i] == '\\')
		{
			get_func_back(format[i+1])(void);
		}
		i++;
	}
	return (i);
}
