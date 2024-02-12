#include <stdio.h>
/**
 * main - Prints the ARGV[] of the function
 * @argc: Arg
 * @argv: arg
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
