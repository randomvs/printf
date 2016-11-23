#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
#include <stdarg.h>

int _putchar(char);
int pull_print(char c, va_list *ap);
int _printf(const char *format, ...);
int exponent(int x, int y);
int binary(unsigned int num);
int p_int(va_list *);
int p_char(va_list *);
int p_float(va_list *);
int p_string(va_list *);
int p_rev(char *s);
int p_bin(va_list *ap);

/**
 * struct flag -flag object
 * @letter: flag char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding print function
 **/
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;
#endif
