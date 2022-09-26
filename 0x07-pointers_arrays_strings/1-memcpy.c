#include "main.h"

/**
* _memcpy
* @dest: target mempry area
* @src: original memory allocation
* @n: number of bytes
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}
	return (dest);
}
