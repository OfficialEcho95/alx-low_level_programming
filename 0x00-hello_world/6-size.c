#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)*
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of a int: %lu\n", sizeof(int));
	printf("Size of a float: %lu\n", sizeof(float));
	printf("Size of a double: %lu", sizeof(double));
	return(0);
}