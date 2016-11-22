#include "holberton.h"

/**
 * _printf - print string as printf
 * @parameters: number of arguments
 * Return: void
 **/
void _printf(char *string, unsigned int parameters, ...)
{
	va_list ap;
	unsigned int i, var_count;
	/**char *s;**/

	/**va_start(ap, parameters);

	s = va_arg(ap, char *);**/

	for (i = 0; string[i] != '\0'; i++)
	{
		if (var_count >= parameters) //what is var_count initialized as?
			return;

		if (string[i] == '%')
		{
			pull_print(string[i + 1], ap);
			i++;
			var_count++;
		}
		else
			_putchar(string[i]);
	}
	va_end(ap);
}
