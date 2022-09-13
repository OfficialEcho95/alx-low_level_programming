#include<stdio.h>
#include"main.h"
/*
 *THis function prints _putchar
 *Return: 0
 */
int main(void)
{
	char o[] = "_putchar";
	int c;
	for(c=0;c<8;c++)
	{
		putchar(o[c]);
	}
		putchar('\n');
	return(0);
}
