#include "holberton.h"
/**
 * get_func - selects the correct function to perform the operation asked
 * @s: format type
 *
 * Return: function that recives a va_list and return and int
 */
int (*get_func(const char *s))(va_list)
{
        unsigned int j = 0;
        fmt tipos[] = {
                {"c", fun_char},
                {"s", fun_string},
                {"%", fun_per},
                {"i", fun_int},
                {"d", fun_dec},
                {"b", fun_bin},
                {"u", fun_uns},
                {NULL, NULL}
        };
        while (tipos[j].z != NULL)
        {
                if (*s == *tipos[j].z)
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
        if (format == NULL)
                return (-1);
        va_start(list, format);
        if (list == NULL)
                return (-1);
        while (format && format[i])
        {
                if (format[i] && format[i] != '%')
                {
                        count += _putchar(format[i]);
                }
                if (format[i] == '%')
                {
                        while (format[i + 1] == ' ')
                                i++;
                        if (format[i + 1] == '\0')
                                return (-1);
                        f = get_func(&format[i + 1]);
                        if (f != NULL)
                        {
                                count += f(list);
                                i += 1;
                        }
                        else
                                count += _putchar('%');
                }
                i++;
        }
        return (count);
}
