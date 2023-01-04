#include "main.h"

/**
 * factorial - Returns the factorial of a given num
 * @n: num
 * Return: if n > 0 - the factorial of n,
 * If n < 0 - 1 to indicate error
*/
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
}
