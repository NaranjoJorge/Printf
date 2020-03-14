#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
typedef struct formato{
	char *z;
	int (*fun)(va_list);
} fmt;

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int fun_char(va_list c)
{
    return 1;
}

int _printf(const char *format, ...)
{
        int i = 0;
        int j = 0, count;
        fmt tipos[] = {
                {"c", fun_char},
                {NULL, NULL}
         };
         va_list list;
         
         va_start(list, format);
         count = 0;
         while (format && format[i])
         {
                 
                 if (format[i] != '%' && format[i])
                 {
                        count += _putchar(format[i]);
                 }
                 if (format[i] == '%')
                 {
                     j = 0;
                     while(tipos[j].z != NULL)
                     {
                        if (format[i + 1] == *tipos[j].z && format[i + 1])
                        {
                            tipos[j].fun(list);
                            break;
                        }
                        j++;
                     }
                 }
                 i++;
         }
         return (count);
 }
 
 int main()
{
    printf("\n%d", _printf("Hello % World"));

    return 0;
}
