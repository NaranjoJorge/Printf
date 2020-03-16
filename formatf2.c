#include "holberton.h"
/**
 * fun_bin - function that prints binary
 * @b: va_list b
 *
 * Return: number of chars
 */
int fun_bin(va_list b)
{
        unsigned int num, max, i, sum;
        unsigned int bits[32];
        int count;
        num = va_arg(b, unsigned int);
        max = 2147483648;
        for (i = 0; i < 32; i++)
        {
                bits[i] = (num / max) % 2;
                max /= 2;
        }
        for (i = 0, sum = 0, count = 0; i < 32; i++)
        {
                sum += bits[i];
                if (sum || i == 31)
                {
                        count += _putchar(bits[i] + '0');
                }
        }
        return (count);
}
/**
 * fun_uns - function that prints unsigned int
 * @u: va_list u
 *
 * Return: number of chars
 */
int fun_uns(va_list u)
{
        unsigned int digits[10];
        unsigned int j, teens, num, sum, count = 0;
        num = va_arg(u, unsigned int);
        teens = 1000000000;
        for (j = 0; j < 10; j++)
        {
                digits[j] = (num / teens) % 10;
                teens /= 10;
        }
        for (j = 0, sum = 0; j < 10; j++)
        {
                sum += digits[j];
                if (digits[j] != 0 || j == 9)
                        count += _putchar(digits[j] + '0');
        }
        return (count);
}
