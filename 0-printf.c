#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * print_int - print an integer
 * @n: the int to be printed
 * @len: the length of the printed int
 * return: nothing
 */
void print_int(int n, int *len)
{
	if (n < 0)
	{
		_putchar('-');
		*len = *len + 1;
		n = -1 * n;
	}
	if (n / 10 != 0)
	{
		print_int(n / 10, len);
	}
	_putchar('0' + (n % 10));
	*len = *len + 1;
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
					print_int(va_arg(args, int), count);
					break;
				case 'i':
					print_int(va_arg(args, int), count);
					break;
				default:
					printchar(format[i], count);
			}
		}
		else
			printchar(format[i], count);
		i++;
	}
	return (*count - 1);
}
