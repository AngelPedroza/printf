#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdarg.h>

typedef struct specify {
	char c;
	void (*f)(va_list list);
}specify;

int _printf(const char *format, ...);

#endif
