#include "holberton.h"

int fun_char(va_list ls)
{
	int variable = va_arg(ls, int);
	_putchar(variable);
}

int fun_char(va_list ls)
{
        int variable = va_arg(ls, int);
        _putchar(variable);
}

int fun_char(va_list ls)
{
        int variable = va_arg(ls, int);
        _putchar(variable);
}

int fun_char(va_list ls)
{
        int variable = va_arg(ls, int);
        _putchar(variable);
}

int fun_char(va_list ls)
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

	fmt tipos{
		"c", fun_char;
		"s", fun_string;
		"%", fun_percent;
		"d", fun_decimal;
		"i", fun_integer;
		{NULL, NULL};
	};
}
