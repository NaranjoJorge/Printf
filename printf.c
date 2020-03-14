#include "holberton.h"

/**
 * fun_char - prints char
 * @ls:va_list
 * Return: void
 */
void fun_char(va_list ls)
{
	int variable = va_arg(ls, int);
	_putchar(variable);
}

/**
 * fun_string - prints string.
 * @ls:va_list
 * Return: void
 */
void fun_string(va_list ls)
{
        int variable = va_arg(ls, char*);
        _putchar(variable);
}

/**
 * fun_percent - prints ??
 * @ls:va_list
 * Return: void
 */
void fun_percent(va_list ls)
{
        int variable = va_arg(ls, /* */);
        _putchar(variable);
}

/**
 * fm_decimal - prints decimal
 * @ls:va_list
 * Return: void
 */
void fun_decimal(va_list ls)
{
        int variable = va_arg(ls, int);
        _putchar(variable);
}

/**
 * fun_integer - prints integer.
 * @ls:va_list
 * Return: void
 */
void fun_integer(va_list ls)
{
        int variable = va_arg(ls, int);
        _putchar(variable);
}


/**
 * _printf - Prints anything.
 * @format: char*
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int j;

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
		while (*tipos[j])
		{
			if (format[i] == *tipos[j].z)
				/*tipos[j].*fun); */
		}
	}
}
