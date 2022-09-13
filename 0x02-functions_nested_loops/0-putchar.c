#include<stdio.h>
#include"main.h"
/*
 * main - THis function prints _putchar
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
	char o[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(o[c]);
	}
		putchar('\n');
	return (0);
}
