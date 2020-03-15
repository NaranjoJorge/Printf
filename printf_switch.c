#include <stdio.h>

int _printf(const char *format, ...)
{

	int i = 0;
	char *letra;
	va_list list;

	va_start(list, format);

	for (i = 0; format && *format[i]; i++)
		{

			letra = va_arg(list, *format[i]);
			if (*format[i] != '%')
			{
				_putchar (letra);
			}

			if (*format[i] == %)
			{
				switch (format[i + 1])
				{
				case "c":
					_putchar (va_arg(list, *format[i + 1]));
					break;
				}
			}
		}
}
