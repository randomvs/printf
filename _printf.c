#include "holberton.h"

/**
 * _printf - print string as printf
 * @parameters: number of arguments
 * Return: void
 **/
void _printf(unsigned int parameters, ...)
{
	va_list ap;
	unsigned int i, var_count;
	char *s;

	va_start(ap, parameters);

	s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (var_count >= parameters)
			return;

		if (s[i] == '%')
		{
			pull_print(s[i + 1], ap);
			i++;
			var_count++;
		}
		else
			_putchar(s[i]);
	}
	va_end(ap);
}
