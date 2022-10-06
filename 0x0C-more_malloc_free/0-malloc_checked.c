#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef>

/**
 *malloc_checked - Creates an array
 *@b: array size
 *
 *Return: Pointer to array
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);

	}
	return (ptr);
}
