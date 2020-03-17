#include "holberton.h"
/**
 * fun_hex - print hexadecimal in lowercase
 * @x: valist with argument
 *
 * Return: number of printed chars
 */
int fun_hex(va_list x)
{
	unsigned int num, max, i, sum;
	unsigned int digits[8];
	int count;

	num = va_arg(x, unsigned int);
	max = 268435456;
	for (i = 0; i < 8; i++)
	{
		digits[i] = (num / max) % 16;
		max /= 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += digits[i];
		if (sum || i == 7)
		{
			if (digits[i] < 10)
				count += _putchar(digits[i] + '0');
			else
				count += _putchar(39 + digits[i] + '0');
		}
	}
	return (count);
}
/**
 * fun_heX - print hexadecimal in uppercase
 * @x: valist with argument
 *
 * Return: number of printed chars
 */
int fun_heX(va_list x)
{
	unsigned int num, max, i, sum;
	unsigned int digits[8];
	int count;

	num = va_arg(x, unsigned int);
	max = 268435456;
	for (i = 0; i < 8; i++)
	{
		digits[i] = (num / max) % 16;
		max /= 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += digits[i];
		if (sum || i == 7)
		{
			if (digits[i] < 10)
				count += _putchar(digits[i] + '0');
			else
				count += _putchar(7 + digits[i] + '0');
		}
	}
	return (count);
}
/**
 * fun_adr - print an adress
 * @x: valist with argument
 *
 * Return: number of printed chars
 */
int fun_adr(va_list p)
{
	unsigned int i, sum;
	unsigned int digits[16];
	unsigned long num, max;
	int count = 0;

	num = va_arg(p, unsigned long);
	max = 1152921504606846976; /*16^15*/
	if (num == 0)
		return (write(1, "(nil)", 5));
	_putchar('0');
	_putchar('x');
	count += 2;
	for (i = 0; i < 16; i++)
	{
		digits[i] = (num / max) % 16;
		max /= 16;
	}
	for (i = 0, sum = 0, count = 0; i < 16; i++)
	{
		sum += digits[i];
		if (sum || i == 15)
		{
			if (digits[i] < 10)
			{
				_putchar(digits[i] + '0');
				count++;
			}
			else
			{
				_putchar(39 + digits[i] + '0');
				count++;
			}
		}
	}
	return (count);
}
