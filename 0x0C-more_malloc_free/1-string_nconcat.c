#include "main.h"
#include <stlib.h>
#include <stdlib.h>

/**
 * _strlen - calculate and return string length
 * @string: str
 * Return: str length
*/
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)

	return (i);
}

/**
 * string_nconcat - concat n bytes of  string to another
 * @s1: str to append to
 * @s2: str to concat from
 * @n: number of bytes from s2 to concat to s1
 * Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
