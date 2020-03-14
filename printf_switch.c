#include <stdio.h>

int _printf(const char *format, ...)
{

	int i = 0;
	va_list list;

	va_start(list, format);

	if (*format[i] != '%')
	{
		for (i = 0; format && format[ );
	}

		if (*format[i] == %)
		{
			switch (format[i + 1])
			case "c": _putchar(va_arg(list, char*);
		}
}
