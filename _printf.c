#include "holberton.h"

/**
 * get_func - selects the correct function to perform the operation asked
 * @s: format type
 *
 * Return: function that recives a va_list and return and int
 */
int (*get_func(char *s))(va_list)
{
	fmt tipos[] = {
		{"c", fun_char},
		{"s", fun_string},
		{"%", fun_per},
		{NULL, NULL}
	};
	int j = 0;

	while(tipos[j].z != NULL)
	{
		if (s && *s == *tipos[j].z )
		{
			return (tipos[j].fun);
		}
		j++;
	}
	return (NULL);
}

/**
 * _printf - funtion that prints formated output
 * @format: format to print
 *
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list list;
	int (*f)(va_list);

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] && format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		if (format[i] == '%')
		{
			f = get_func(&format[i + 1]);
			if (f != NULL)
			{
				count += f(list);
				i += 1;
			}
			else
				count += _putchar(format[i]);
		}
		i++;
	}
	return (count);
}
