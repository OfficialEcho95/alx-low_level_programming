#include "main.h"
/**
*_islower - that checks for alphabetic characters 
*
* c - is the input char
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
