#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
#include <stdarg.h>

int _strlen(char *s);
int _putchar(char);
int pull_print(char c, va_list *ap);
int _printf(const char *format, ...);
int exponent(int x, int y);
int p_int(va_list *);
int p_char(va_list *);
int p_float(va_list *);
int p_string(va_list *);

typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;
#endif
