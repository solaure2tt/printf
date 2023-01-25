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

	len = _printf("Let us try to printf a simple sentence.\n");
	printf("len = %d\n", len);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", " I am a string");
	len = _printf("Percent:[%%]\n");
	printf("len = %d\n", len);
	len = _printf("this is a positive integer: %d\n", 392);
	printf("len = %d\n", len);
	_printf("this is a negative integer: %d\n", -459);
	_printf("this is zero: %d\n", 0);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len, len);
	_printf("the octal value %d is %o\n", 123, 123);
	_printf("the unsigned int value of %d is %u\n", 123, 123);
	_printf("the hexadecimal int value of %d is %x\n", 17, 17);
	_printf("the hexadecimal int value of %d is %x\n", 123, 123); 
	_printf("the hexadecimal int value of %d is %X\n", 123, 123);
	len = _printf("%b\n", 0);
	printf("len = %d\n", len);
	_printf("%b\n", 1);
	len = _printf("%b\n", 7);
	printf("len = %d\n", len);
	_printf("%b\n", 98);
	len = _printf("%b\n", 200);
	printf("len = %d\n", len);

	return(0);
}
