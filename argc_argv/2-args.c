#include <stdio.h>

/**
 * main - Prints every thing it recieves
 * @argc: Arg
 * @argv: ARG
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
