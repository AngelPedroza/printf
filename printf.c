#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list list;
	int i, checker;

	va_start(list, format);
	for (i = 0; format && format[i]; i++;)
	{
		if (format[i] == '%')
		{
			checker = 0;
			for (j = 1; format[i + j] != '\0' ; j++)
		    {
				checker = get_func_porc(format[i+j])(list);
				if(checker == 
					break;
		    }
		}
		else if (format[i] == '\\')
		{
			checker = 0;
			for (j = 1format[i + j] != '\0'; j++)
		    {
				checker = get_func_back(format[i+j])(void);
				if(checker == 1)
					break;
		    }
		}
	}
	return (i);
}
