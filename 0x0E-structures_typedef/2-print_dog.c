#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog- name of fucntion
 * struct dog- container for the properties
 * @d: name of variable
 * Return: always return 0 on success
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
			printf("Name: \n", d->name);
		printf("Age: \n", d->age);
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Owner: \n", d->owner);
	}
}
