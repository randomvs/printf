#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * pull_print - prints va_list using the correct format
 * @ap: va_list to print
 * @c: character flag
 * Return: number of chars printed
 **/
int pull_print(char c, va_list *ap)
{
	int i;
	find_flag flags[] = {
		{'d', mkint},
		{'i', mkint},
		{'c', mkchar},
		{'s', mkstring},
		{'b', mkbin},
		{'S', mkhex},
		{'\0', NULL}
	};

	for (i = 0; flags[i].letter != '\0'; i++)
	{
		if (flags[i].letter == c)
		{
			return (flags[i].prnt(ap));
		}
	}
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (_putchar(c));
}
