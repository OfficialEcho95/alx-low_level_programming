#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums up all its parameters
 * @n: number of parameters
 *
 * Return: Sum of parameters
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
