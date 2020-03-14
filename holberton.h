#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stddef.h>
#include <stdio.h>



int _printf(const char *format, ...);

/**
 * struct formato -
 * @z: char*
 * @(*fun):
 */
typedef struct formato{
	char *z;
	void (*fun)(va_list);
} fmt;

#endif _HOLBERTON_H_
