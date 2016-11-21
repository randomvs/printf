#include <stdarg.h>
#include "holberton.h"

/**
 * pull_print - prints va_list using the correct format
 * @ap: va_list to print
 * @c: character flag
 **/
void pull_print(va_list ap, char c)
{
	int i;
	find_flag flags[] ={
		{'d', p_int},
		{'c', p_char},
		{'f', p_float},
		{'s', p_string},
		{NULL, NULL}
	}

	for (i = 0, i < 4; i++)
	{
		if (flags[i].letter == c)
			flags[i].prnt(ap);
	}
}
