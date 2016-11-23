#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
#include <stdarg.h>

int _printf(const char *format, ...);
int pull_print(char c, va_list *ap);
int _putchar(char);
int exponent(int x, int y);
int p_bin(unsigned int num);
int p_int(int);
int p_string(char *);
int p_hex(char *);
int p_rev(char *s);

int mkstring(va_list *);
int mkchar(va_list *);
int mkint(va_list *);
int mkbin(va_list *);
int mkhex(va_list *ap);

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
