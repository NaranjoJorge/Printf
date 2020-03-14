#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_


int _printf(const char *format, ...);


typedef struct formato{
	char *z;
	void (*fun)(va_list);
} fmt;

#endif _HOLBERTON_H_
