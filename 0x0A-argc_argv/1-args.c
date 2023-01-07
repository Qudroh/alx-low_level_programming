#include <stdio.h>

/**
 * main - this is a function to print
 * @argc: argc param
 * @argv: an array of a cmd listed
 * Return: 0 for success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
