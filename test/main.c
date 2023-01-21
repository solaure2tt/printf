#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	_printf("Let us try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", " I am a string");
	len = _printf("Percent:[%%]\n");
	printf("len = %d\n", len);
	_printf("this is a positive integer: %d\n", 392);
	_printf("this is a negative integer: %d\n", -459);
	_printf("this is zero: %d\n", 0);

	return(0);
}
