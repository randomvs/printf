#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * exponent - x to the power of y
 * @x: base number
 * @y: exponent
 * Description: calcuates x^y
 * Return: x^y
 *
 **/

int exponent(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * exponent(x, y - 1));
}


/**
 * print_number - print an int using only _putchar
 * @i: va_list containing number
 *
 * Return: nothing
 **/

int p_int(va_list *i)
{
	int size, digit, number, result;
	long counter, sign;

	number = va_arg(*i, int);
	sign = 1;
	digit = 0;
	size = 1;
	counter = number;
	result = 0;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		counter *= sign;
		result++;
	}

	for (; counter >= 10; size++)
	{
		counter = counter / 10;
	}

	counter = sign * (long)number;

	while (size >= 2)
	{
		digit = (counter / exponent(10, size - 1));
		_putchar(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
		result++;
	}
	_putchar(counter % 10 + '0');
	result++;
	return (result);
}

/**
 * p_char - pring char
 * @i: va_list containing char
 * Return: nothing
 **/
int p_char(va_list *i)
{
	return(_putchar(va_arg(*i, int)));
}
/**
void p_float(va_list i)
{
	va_arg(i, float);
}
**/

/**
 * p_string - pring string
 * @ap: va_list containing string
 * Return: nothing
 **/
int p_string(va_list *ap)
{
	int result;
	unsigned int i;
	char *s;

	s = va_arg(*ap, char *);
	result = 0;
	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		result++;
	}
	return (result);
}
