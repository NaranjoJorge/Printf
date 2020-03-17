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
 * @s: va_list with the string
 *
 * Return: number of printed chars
 */
int fun_string(va_list s)
{
	int count = 0, i;
	char *string = va_arg(s, char *);

	if (string == NULL)
		return (write(1, "(null)", 6));
	for (i = 0;  string[i]; i++)
		count += _putchar(string[i]);
	return (count);
}
/**
 * fun_per - function that prints percentage sign
 * @c: va_list with the sign
 *
 * Return: number of printed chars
 */
int fun_per(va_list c)
{
	UNUSED(c);
	return (_putchar('%'));
}
/**
 * fun_int - function that prints integer
 * @i: va_list i
 *
 * Return: number of chars
 */
int fun_int(va_list i)
{
	int digits[10];
	int j, teens, num, sum, count;

	num = va_arg(i, int);
	count = 0;
	teens = 1000000000;
	digits[0] = num / teens;
	for (j = 0; j < 10; j++)
	{
		teens /= 10;
		digits[j] = (num / teens) % 10;
	}
	if (num < 0)
	{
		count = _putchar('-');
		for (j = 0; j < 10; j++)
			digits[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += digits[j];
		if (sum != 0 || j == 9)
		{
			count = _putchar(digits[j] + '0');
		}

	}
	return (count);
}
/**
 * fun_dec - function that prints decimal
 * @d: va_list d
 *
 * Return: number of chars
 */
int fun_dec(va_list d)
{
	int digits[10];
	int j, teens, num, sum, count;

	num = va_arg(d, int);
	count = 0;
	teens = 1000000000;
	digits[0] = num / teens;
	for (j = 1; j < 10; j++)
	{
		teens /= 10;
		digits[j] = (num / teens) % 10;
	}
	if (num < 0)
	{
		count = _putchar('-');
		for (j = 0; j < 10; j++)
			digits[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += digits[j];
		if (sum != 0 || j == 9)
		{
			count = _putchar(digits[j] + '0');
		}

	}
	return (count);
}
