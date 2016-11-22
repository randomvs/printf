#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * pull_print - prints va_list using the correct format
 * @ap: va_list to print
 * @c: character flag
 **/
int pull_print(char c, va_list *ap)
{
	int i;
	find_flag flags[] = {
		{'d', p_int},
		{'c', p_char},
		/**{'f', p_float},**/
		{'s', p_string},
		{'\0', NULL}
	};

	for (i = 0; flags[i].letter != '\0'; i++)
	{
		if (flags[i].letter == c)
		{
			return flags[i].prnt(ap);
		}
	}
	if (c == '%')
	{
		_putchar('%');
		return 1;
	}
	return (0);
}
