#include "holberton.h"

/**
 * fun_rev - prints a string in reverse
 * @str: va_list with the arguments
 *
 * Return: numbers of characters
 */
int fun_rev(va_list str)
{
	int i = 0, count = 0;
	char *s;

	s = va_arg(str, char *);
	if (s == NULL)
		s = ")llun(";
	while (*(s + i))
	{
		i++;
	}
	while (i--)
	{
		_putchar(*(s + i));
		count++;
	}
	return (count);
}
