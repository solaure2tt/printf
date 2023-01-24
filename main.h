#ifndef MAIN
#define MAIN

/**
 * struct _hex - struct hex
 * @n: the int;
 * @l_lower: the corresponding letter lowercase
 * @l_upper: the correponsding letter uppercase
 */
typedef struct _hex
{
	unsigned int n;
	char l_lower;
	char l_upper;
} hex;
int _printf(const char *format, ...);
int _putchar(char c);

#endif
