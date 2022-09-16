#include <stdio.h>
#include "main.h"
/**
*print_numbers - code to print for digits
*
*Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int c;
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
