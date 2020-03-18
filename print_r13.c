#include "holberton.h"

/**
 * fun_r13 - prints the rot13'ed string
 * @str: va_list with arguments
 *
 * Return: number or printed chars
 */
int fun_r13(va_list str)
{
	int i, j, count;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;

	s = va_arg(str, char*);
	if (s == NULL)
	{
		s = "(null)";
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			count++;
		}
		return (count);
	}
	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == l[j])
			{
				_putchar(n[j]);
				count++;
				break;
			}
		}
	}
	return (count);
}
