#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * p_string - pring string
 * @s: string to print
 * Return: nothing
 **/
int p_string(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * p_rev - print string in reverse
 * @s: string to reverse
 * Return: size of string
 **/
int p_rev(char *s)
{
	if (s[1] == '\0')
		return (_putchar(s[0]));

	return (p_rev(&s[1]) + _putchar(s[0]));
}

/**
 * p_hexstring - print string, print non-printable as hex
 * @s: string to print
 * Return: length of string printed
 **/
int p_hexstring(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (s[i] < 16)
				_putchar('0');
			p_hexcap(s[i]);
		}
		else
			_putchar(s[i]);
	}
	return (i);
}
