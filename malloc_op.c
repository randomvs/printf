#include "holberton.h"

/**
 * _strlen - returns the length of a pointer
 * @s: variable pointer
 * Return: total number of index
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * str_mem - points to a duplicate string
 * @str: arguemnt to duplicate
 * Return: pointer to duplicate string
 * otherwise return NULL if out of space
 */
char *str_mem(char *str)
{
	char *s;
	int i , size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = str[i];
	return (s);
}
