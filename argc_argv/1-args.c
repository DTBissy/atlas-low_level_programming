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
	int num;

	num = argc;

	for (i = 0; i <= argc; i++)
	{
		printf("%d\n", num);
		return (0);
	}
}
