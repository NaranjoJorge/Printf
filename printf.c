#include "holberton.h"

/**
 * fun_char - prints char
 * @ls:va_list
 * Return: void
 */
int fun_char(va_list list)
{
	int variable = va_arg(list, int);
	return (_putchar(variable));

}

/**
 * fun_string - prints string.
 * @ls:va_list
 * Return: void
 */
/*int fun_string(va_list list)
{
        int variable = va_arg(list, char*);
        _putchar(variable);
}
*/
/**
 * fun_percent - prints ??
 * @ls:va_list
 * Return: void
 */
/*int fun_percent(va_list list)
{
        int variable = va_arg(list, );
        _putchar(variable);
}
*/
/**
 * fm_decimal - prints decimal
 * @ls:va_list
 * Return: void
 */
/*
int fun_decimal(va_list list)
{
        int variable = va_arg(list, int);
        _putchar(variable);
}
*/
/**
 * fun_integer - prints integer.
 * @ls:va_list
 * Return: void
 */
/*
int fun_integer(va_list list)
{
        int variable = va_arg(list, int);
        _putchar(variable);
}
*/

/**
 * _printf - Prints anything.
 * @format: char*
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	int j;
	va_list list;

	va_start (list, format);

	fmt tipos []{
		{"c", fun_char};
		{"s", fun_string};
		{"%", fun_percent};
		{"d", fun_decimal};
		{"i", fun_integer};
		{NULL, NULL};
	};

	while (format && format[i])
	{
		j = 0;
		while ((format[i] != "%") && (format[i + 1] != t*ipos[j].z))
		{
			counter += _putchar(format[i]);
		}
	}
}
