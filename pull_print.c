#include <stdarg.h>
#include "holberton.h"

/**
 * pull_print - prints va_list using the correct format
 * @ap: va_list to print
 * @c: character flag
 **/
void pull_print(char c, va_list ap)
{
	int i;
	find_flag flags[] = {
		{'d', p_int},
		{'c', p_char},
		/**{'f', p_float},**/
		{'s', p_string}
	};

	for (i = 0; i < 4; i++)
	{
		if (flags[i].letter == c)
			flags[i].prnt(ap);
	}
	if (c == '%')
		_putchar('%');
}
