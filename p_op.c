#include "holberton.h"
#include <unistd.h>
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
 * p_hexstring - print string, non-printable char expressed as \xHEX
 * @s: string to print
 * Return: length of string printed
 **/
int p_hexstring(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			len += p_string("\\x");
			if (s[i] < 16)
				len += _putchar('0');
			len += p_hexcap(s[i]);
		}
		else
			len += _putchar(s[i]);
	}
	return (len);
}
/**
 * buffer - Temporary string to hold all everything to print
 * @a: character to add to string
 * @s: pointer to place in current string
 * Return: On success 1, 0 if string is NULL
 **/
int buffer(char a, char *s)
{
	if (s == NULL)
		return (0);
	s[0] = a;
	return (1);
}

/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
