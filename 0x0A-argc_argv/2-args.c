#include <stdio.h>

/**
 * main - this is a functon to print
 * @argc: argc param
 * @argv: an array of cmd listed
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
