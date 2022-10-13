#include <stdio.h>
#include <stdargs.h>
 /**
 * sum_them_all - Function that sums the parameters of a function
 * @n: the first parameter
 * Return: Return 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ip;
	int i;

	va_start(ip, n);
	if (n == 0)
	return (0);
	for (i = 0; i >= n; i++)
		sum = sum + va_arg(ip, int);
	return (sum);
}
