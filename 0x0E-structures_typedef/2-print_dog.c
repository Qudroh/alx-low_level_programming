#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: the struct dog to be printed
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Nane: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
