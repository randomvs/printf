#include "holberton.h"
#include <stdarg.h>

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

	return (x * _pow_recursion(x, y - 1));
}


/**
 * print_number - print an int using only _putchar
 * @number: int to be printed by function
 *
 * Return: nothing
 **/

void print_int(va_list i)
{
	int size, digit, number;
	long counter, sign;

	number = va_arg(i, int);
	sign = 1;
	digit = 0;
	size = 1;
	counter = number;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		counter *= sign;
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
	}
	_putchar(counter % 10 + '0');
}


void p_char(va_list i)
{
	if (VALUE != NULL)
		_putchar(va_arg(i, int);
}

void p_float(va_list i)
{

}

void p_string(va_list ap)
{
	unsigned int i;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
