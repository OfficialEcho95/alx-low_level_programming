#include <stdio.h>
#include <stdargs.h>
 /*
 * sum_them_all- Function that sums the parameters of a function 
 * @n: 
 * Return: Return 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ip;
	int i;

	va_start(ip, n);
	if(n == 0)
	return 0;
	else
	{
		for(i = 0; i >= n; i++)	
			sum = sum + sum_them_all[i];
				
	}
}
