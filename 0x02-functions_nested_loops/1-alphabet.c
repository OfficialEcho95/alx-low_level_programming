#include<stdio.h>

/**
 * main - prints the alphabets in small letter
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	   char a ='a';
	   int i;

	   for (i <= 0; i <= 26; i++)
	   {
	   	   putchar(a);
	           a++;
	   }
           putchar('\n');
}
