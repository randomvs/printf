#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * mkstring - makes object into string
 * @ap: va_list object
 * Return: chars printed
 **/
int mkstring(va_list *ap)
{
	return (p_string(va_arg(*ap, char *)));
}

/**
 * mkint - makes object into int
 * @ap: va_list object
 * Return: digits printed
 **/
int mkint(va_list *ap)
{
	return (p_int(va_arg(*ap, int)));
}

/**
 * mkchar - makes object into char
 * @ap: va_list object
 * Return: chars printed
 **/
int mkchar(va_list *ap)
{
	return (_putchar(va_arg(*ap, int)));
}

/**
 * mkbin - makes object into int, print as binary
 * @ap: va_list object
 * Return: chars printed
 **/
int mkbin(va_list *ap)
{
	return (p_bin(va_arg(*ap, unsigned int)));
}

/**
 * mkhex - makes object into string, print ascii for non-printable
 * @ap: va_list object
 * Return: chars printed
 **/
int mkhex(va_list *ap)
{
	return (p_hex(va_arg(*ap, int)));
}
