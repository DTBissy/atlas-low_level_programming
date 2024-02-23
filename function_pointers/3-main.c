#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}
	
	if (argv[2][1])
	{
		printf("ERROR\n");
		return (99);
	}


