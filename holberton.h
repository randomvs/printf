#include <stdarg.h>

#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
int exponent(int x, int y);
void p_int(int number);
void p_char();
void p_float();
void p_string();

typedef struct flag
{
	char letter;
	(*prnt)(va_list);
} find_flag;
#endit
