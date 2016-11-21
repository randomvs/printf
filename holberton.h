#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
#include <stdarg.h>

int _putchar(char);
void pull_print(char c, va_list ap);
void _printf(unsigned int parameters, ...);
int exponent(int x, int y);
void p_int(va_list);
void p_char(va_list);
void p_float(va_list);
void p_string(va_list);

typedef struct flag
{
	char letter;
	void (*prnt)(va_list);
} find_flag;
#endif
