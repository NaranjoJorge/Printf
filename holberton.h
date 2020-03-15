#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct formato - structure for the function slector
 * @z: format to print
 * @fun: function that print the format
 */

typedef struct formato{
	char *z;
	void (*fun)(va_list);
} fmt;
int _printf(const char *format, ...);
int _putchar(char c);
int fun_char(va_list c);
int fun_string(va_list s);
int fun_per(va_list c);

#endif
