#include "main.h"

/**
 * _memset - this memory set function
 * @s: string
 * @b: a char
 * @n: an int
 * Return: a string
*/
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
