#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * p_stringRECURSIVE - pring string
 * @s: string to print
 * Return: nothing
 **/
int p_stringRECURSIVE(char *s)
{
	if (s == '\0')
		return (0);

	if (s[1] == '\0')
		return (_putchar(s[0]));
	else
		return (_putchar(s[0]) + p_string(&s[1]));
}

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
 * p_hex - print string, print non-printable as hex
 * @s: string to print
 * Return: length of string printed
 **/
int p_hex(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			p_hex(&s[i]);
		}
		else
			_putchar(s[i]);
	}
	return (i);
}
