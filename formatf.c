#include "holberton.h"

/**
 * fun_char - function that prints chars
 * @c: va_list with the char to print
 *
 * Return: number of printed chars
 */
int fun_char(va_list c)
{
	return (_putchar(va_arg(c, int)));
}

/**
 * fun_string- function that prints strings
 * @c: va_list with the string
 *
 * Return: number of printed chars
 */
int fun_string(va_list s)
{
	int count = 0, i;
	char *string = va_arg(s, char *);

	for (i = 0;  string[i]; i++)
		count += _putchar(string[i]);
	return(count);
}
  
/**
 * fun_per - function that prints percentage sign
 * @c: va_list with the sign
 *
 * Return: number of printed chars
 */
int fun_per(va_list c)
{
	return (_putchar('%'));
}
