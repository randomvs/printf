#include "holberton.h"


void _printf(unsigned int parameters, ...)
{
	va_list ap;
	unsigned int i, j;
	char *s;

	j = 0;
	va_start(ap, parameters);
	for (i = 0; i < parameters; i ++)
	{
		if (i == 0)
			s = va_arg(ap, char *);
		while (s[j] != '\0')
		{
			if (s[j] == '%')
			{
				pull_print(s[j + 1], XXX);
				j++;
			}
			else
				_putchar(s[j]);
			j++;
		}
	}
	va_end(ap);
}
