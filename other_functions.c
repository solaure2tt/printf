#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_convertb_int - print a converted int
 * @n: the int to be printed
 * @len: the lengt of the printed int
 * return nothing
 */
void print_convertb_int(unsigned int n, int *len)
{
	if (n <= 1)
		_putchar(n + '0');
	else
	{
		print_convertb_int(n / 2,  len);
		_putchar((n % 2) + '0');
		*len = *len + 1;
	}
}

/**
 * other_funct - other case conversion specifier
 * Description: handle x, X, u, o conversion specifier
 * @n: paremeter to convert
 * @conv: base
 * @len: number of chacracter print
 * Return: nothing
 */
void other_funct(unsigned int n, char conv, int *len)
{
	switch (conv)
	{
		case 'b':
			print_convertb_int(n, len);
			break;
		case 'x':
			print_convert_int(n, 16, 0, len);
			break;
		case 'X':
			print_convert_int(n, 16, 1, len);
			break;
		case 'u':
			print_convert_int(n, 10, 0, len);
			break;
		case 'o':
			print_convert_int(n, 8, 0, len);
			break;
	}
}

