#include <stdio.h>
/**
 * main - Printds the num of args
 * @argc: Arg
 * @argv: Arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("Number of args: %d\n", argc);
		return (0);
	}
}
