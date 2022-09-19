#include "main.h"
#include <stdio.h>

/**
* main - check the code
*@n - THe first variable
*@p - The second variable
* Return: Always 0.
*/
void reset_to_98(int *n, int *p)
{
	int a = *n;
	*n = *p;
	*p = a;
}
