#include<stdio.h>

/**
 * main - prints the alphabets in small letter
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	   char i ='a';

	   while (i <= 'z')
	   {
	   	   putchar(i);
	           i++;
	   }
	           putchar('\n');

}
