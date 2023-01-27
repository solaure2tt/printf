#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_convert_int - print a converted int
 * @n: the int to be printed
 * @len: the lengt of the printed int
 * @base: d
 * @upper: s
 * return nothing
 */
void print_convert_int(unsigned int n, int base, int upper,  int *len)
{
	int i;

	hex hdata[] = {
		{10, 'a', 'A'},
		{11, 'b', 'B'},
		{12, 'c', 'C'},
		{13, 'd', 'D'},
		{14, 'e', 'E'},
		{15, 'f', 'F'}
	};
	if (n / base > 0)
		print_convert_int(n / base, base, upper, len);
	if ((n % base) >= 10)
	{
		for (i = 0 ; i < 6 ; i++)
		{
			if ((n % base) == hdata[i].n)
			{
				if (upper == 1)
					_putchar(hdata[i].l_upper);
				else
					_putchar(hdata[i].l_lower);
			}
		}
	}
	else
		_putchar('0' + (n % base));
	*len = *len + 1;
}

/**
 * print_int - print an integer
 * @n: the int to be printed
 * @len: the length of the printed int
 * @conv: the conversion specifier
 * return: nothing
 */
void print_int(int n, int *len, char conv)
{

	if (conv == 'd')
	{
		if (n < 0)
		{
			_putchar('-');
			*len = *len + 1;
			n = -1 * n;
		}
		if (n / 10 != 0)
		{
			print_int(n / 10, len, 'd');
		}
		_putchar('0' + (n % 10));
		*len = *len + 1;
	}
}

/**
 * printchar - print a character
 * Description: print a character on the screen
 * @c: parameter 1
 * @i: parameter 2
 * Return: nothing
 */
void printchar(char c, int *i)
{
	_putchar(c);
	*i = *i + 1;
}

/**
 * printstring - print a string
 * Description: print a string on screen
 * @str: parameter 1
 * @j: parameter 2
 * Return: nothing
 */
void printstring(char *str, int *j)
{
	if (str != NULL)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		*j = *j + 1;
	}
}
/**
 * _printf - printf function
 * Descrription: function that produces output according to a format
 * @format: parameter 1
 * Return: number
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int *count = malloc(sizeof(int));

	*count = 0;
	if (format == NULL)
		return (*count);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					printchar(va_arg(args, int), count);
					break;
				case 's':
					printstring(va_arg(args, char *), count);
					break;
				case 'd':
					print_int(va_arg(args, int), count, 'd');
					break;
				case 'i':
					print_int(va_arg(args, int), count, 'd');
					break;
				case '%':
					printchar(format[i], count);
					break;
				default:
					other_funct(va_arg(args, unsigned int), format[i], count);
			}
		}
		else
			printchar(format[i], count);
		i++;
	}
	return (*count);
}

