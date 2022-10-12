#include <stdio.h>
 /*print_name- The name of the function
 *@s: The parameter 
 *@name: The name to be printed
 */

void print_name(char *s, void (*f)(char *)) 
{
	f(name);
}
