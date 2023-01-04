#include "main.h"

/**
 * _puts_recursion - prints a str, followed by a new line
 * @s: string
 * Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s)
		_pus_recursion(s + 1);
	}
	else
		_putchar('\n');
}
