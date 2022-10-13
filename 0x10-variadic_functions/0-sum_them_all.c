#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

 /**
 * sum_them_all - Function that sums the parameters of a function
 * @n: the first parameter
 * Return: Return 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ip;
	unsigned int i;
	int sum = 0;

	va_start(ip, n);
	
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ip, int);
	va_end(ip);
	return (sum);
}
