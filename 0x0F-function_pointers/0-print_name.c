#include <stdio.h>
 /*print_name- The name of the function
 *@s: The parameter 
 *@name: The name to be printed
 */

void print_name(char *s, void (*f)(char *)) 
{
	int i;

	if (s)	
	{
		for (i = 0; s[i]; i++)
		{
			f(&s[i]);				
		}		
	}
	return (0);
}
