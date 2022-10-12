#include <stdio.h>
#include "function_pointers.h"

 /*print_name- The name of the function
 *@s: The parameter 
 *@name: The name to be printed
 */

void print_name(char *name, void (*f)(char *)) 
{
	if (f != NULL)
		f(name);
}
