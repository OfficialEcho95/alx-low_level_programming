#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog- name of fucntion
 * @d: name of variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %s\n", d->age);
		if (d->name == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
