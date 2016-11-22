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
 * p_int - print an int using only _putchar
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
 * binary - convert into to binary
 * @num: number to convert
 * Return: binary conversion
 **/
unsigned long binary(unsigned int num)
{
	unsigned long b_num, i;

	i = 1;
	b_num = 0;

	while (num)
	{
		b_num = b_num + (num % 2) * i;
		num = num / 2;
		i = i * 10;
	}
	return (b_num);
}
