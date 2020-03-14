#include "holberton.h"

/**
 * fun_char - prints char
 * @ls:va_list
 * Return: void
 */
int fun_char(va_list ls)
{
	int variable = va_arg(ls, int);
	return (_putchar(variable));
}
int _printf(const char *format, ...)
{
	int i = 0;
	int j, count;

	fmt tipos []{
		{"c", fun_char};
		{"s", fun_string};
		{"%", fun_percent};
		{"d", fun_decimal};
		{"i", fun_integer};
		{NULL, NULL};
	};

	count = 0;
	while (format && format[i])
	{
		j = 0;
		while (*tipos[j])
		{
			if (format[i] == *tipos[j].z)
				/*tipos[j].*fun); */
		}
	}
	return (count);
}
