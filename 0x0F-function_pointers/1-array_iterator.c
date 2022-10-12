#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- A function that executes a function given as parameter
 * @array: This contains the arguments
 * @size: Number of arguments
 * @action: Another pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL)
	{
		if (action != NULL)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
