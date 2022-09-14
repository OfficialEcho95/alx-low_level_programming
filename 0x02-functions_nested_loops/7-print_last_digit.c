#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: integer whose last digit is to be printed
* Return: lastdigit
*/
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	n = -n;
	_putchar(n + '0');
	return (n);
}
