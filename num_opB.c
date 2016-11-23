#include "holberton.h"
/**
 * p_hex - print num as hex
 * @num: unsigned int
 * Return: number of digits to print
 **/
int p_hex(unsigned int num)
{
	if (num <= 15)
	{
		if (num <= 9)
			return (_putchar(num + '0'));
		else
			return (_putchar(num + 'a' - 10));
	}
	else
	{
		if (num % 16 <= 9)
			return (p_hex(num / 16) + _putchar(num % 16 + '0'));
		else
			return (p_hex(num / 16) + _putchar(num % 16 + 87));
	}
	return (0);
}

/**
 * p_hexcap - print num as hex
 * @num: unsigned int
 * Return: number of digits to print
 **/
int p_hexcap(unsigned int num)
{
	if (num <= 15)
	{
		if (num <= 9)
			return (_putchar(num + '0'));
		else
			return (_putchar(num + 'A' - 10));
	}
	else
	{
		if (num % 16 <= 9)
			return (p_hexcap(num / 16) + _putchar(num % 16 + '0'));
		else
			return (p_hexcap(num / 16) + _putchar(num % 16 + 55));
	}
	return (0);
}

/**
 * p_octal - print num as octal
 * @num: unsigned int
 * Return: number of digits to print
 **/
int p_octal(unsigned int num)
{
	if (num <= 7)
		return (_putchar(num + '0'));
	else
		return (p_octal(num / 8) + _putchar(num % 8 + '0'));
}

/**
 * p_uint - print num as hex
 * @num: unsigned int
 * Return: number of digits to print
 **/
int p_uint(unsigned int num)
{
	if (num <= 9)
		return (_putchar(num + '0'));
	else
		return (p_uint(num / 10) + _putchar(num % 10 + '0'));
}
