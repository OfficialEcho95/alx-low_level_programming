#include <stdio.h>
#include <stdlib.h>
/**
* main- This is the main function
* @argc: argument count
* @argv: argument one dimensional array
* Return:  Return Success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	}
	Return(0);
}
