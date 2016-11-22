#include "holberton.h"

/**
 * _printf - print string as printf
 * @parameters: number of arguments
 * Return: void
 **/
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, result;

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
<<<<<<< HEAD
		if (var_count >= parameters) //what is var_count initialized as?
			return;

		if (string[i] == '%')
=======
		if (format[i] == '%')
>>>>>>> 8f286549774ad3b78e465660e4766765150c8070
		{
			result += pull_print(format[i + 1], &ap);
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(ap);
	return (result);
}
