#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("hola mundo\n");
	_printf("hola caracter %c aa\n", 'A');
	_printf("hola %s", "santiago\n");
	_printf("hola porcentaje %%\n");
	_printf("hola entero %i\n", 1234);
	_printf("hola decimal %d\n", 1234);
	return (0);
}
