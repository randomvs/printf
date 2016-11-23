#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * mkoctal - makes object into octal int
 * @ap: va_list object
 * Return: chars printed
 **/
int mkoctal(va_list *ap)
{
	return (p_octal(va_arg(*ap, unsigned int)));
}

/**
 * mkhexstring - makes object into string
 * @ap: va_list object
 * Return: chars printed
 **/
int mkhexstring(va_list *ap)
{
	return (p_hexstring(va_arg(*ap, char *)));
}

/**
 * mkunsigned - makes object into unsigned int
 * @ap: va_list object
 * Return: chars printed
 **/
int mkunsigned(va_list *ap)
{
	return (p_uint(va_arg(*ap, unsigned int)));
}

/**
 * mkhexcap - makes object into hex with cap
 * @ap: va_list object
 * Return: chars printed
 **/
int mkhexcap(va_list *ap)
{
	return (p_hexcap(va_arg(*ap, unsigned int)));
}
