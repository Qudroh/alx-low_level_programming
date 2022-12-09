#include <stdio.h>

/**
 * main - print alpha in lower and upper case
 *
 * Return: 0
*/
int main(void)
{

	char luc;

	for (luc = 'a'; luc <= 'z'; luc++)
		putchar(luc);

	for (luc = 'A'; luc <= 'Z'; luc++)
		putchar(luc);
	printf("\n");
	return (0);

}
