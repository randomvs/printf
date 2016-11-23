#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
#include <stdarg.h>

int _printf(const char *format, ...);
int pull_print(char c, va_list *ap);

int _putchar(char);
int buffer(char a, char *s);
int p_bin(unsigned int num);
int exponent(int x, int y);
int p_int(int);
int p_string(char *);
int p_hexstring(char *);
int p_rev(char *s);
int p_hexcap(unsigned int num);
int p_octal(unsigned int num);
int p_uint(unsigned int num);
int p_hex(unsigned int num);

int mkstring(va_list *);
int mkchar(va_list *);
int mkint(va_list *);
int mkbin(va_list *);
int mkhex(va_list *);
int mkhexcap(va_list *);
int mkoctal(va_list *);
int mkhexstring(va_list *);
int mkunsigned(va_list *);

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
