#include "main.h"

/**
 * _strchr - string char
 * @s: string given
 * @c: another char
 * Return: a string
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
