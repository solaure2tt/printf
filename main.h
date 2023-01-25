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
void print_convert_int(unsigned int n, int base, int upper,  int *len);
void other_funct(unsigned int n, char conv, int *len);
void print_convertb_int(unsigned int n, int *len);
void print_int(int n, int *len, char conv);
void printchar(char c, int *i);
void printstring(char *str, int *j);

#endif
