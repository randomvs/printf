#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * p_char - pring char
 * @i: va_list containing char
 * Return: nothing
 **/
int p_char(va_list *i)
{
	return (_putchar(va_arg(*i, int)));
}

/**
 * p_string - pring string
 * @ap: va_list containing string
 * Return: nothing
 **/
int p_string(va_list *ap)
{
	unsigned int i;
	char *s;

	s = va_arg(*ap, char *);

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
 * p_STRING - print string
 * @ap: va_list object
 * Return: length of string printed
 **/
int p_STRING(va_list *ap)
{
	int i;
	char *s;

	s = va_arg(*ap, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{

		}
		else
			_putchar(s[i]);
	}
	return (i);
}
