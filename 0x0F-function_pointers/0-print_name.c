#include <stdio.h>
#include "function_pointers.h"

 /**
 * print_name() - Prints a name
 * @name: The parameter
 * @f: The name to be printed
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
