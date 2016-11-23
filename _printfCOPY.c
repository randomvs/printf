#include "holberton.h"

/**
 * _strlen -counts number of characters in a string
 * @s: string being passed to count
 * Return: number of characters is "s"
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * print_str - print string using _putchar
 * @string: string to print
 *
 * Return: 1
 */
int print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (1);
}

/**
 * _printf - print string as printf
 * @format: number of arguments
 * Return: void
 **/
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, size, n, tmp;
	char buffer[1024];

	i = n = tmp = 0;
	va_start(ap, format);

	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			if (i > 1022)
			{
				buffer[n] = '\0';
				print_str(buffer);
				size += n;
				n = 0;
				buffer[n + 1] = '\0';
			}
			buffer[n] = format[i];
			n++;
			i++;
		}
		buffer[n] = '\0';

		if (format[i] == '%')
		{
			i++;
			tmp = pull_print(format[i + 1], &ap);
			i = tmp;
		}
		n = _strlen(buffer);
	}
	va_end(ap);
	print_str(buffer);
	return (size + n);
}
