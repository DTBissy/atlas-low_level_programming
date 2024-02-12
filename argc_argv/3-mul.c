#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies numbers
 * @argc: Arg
 * @argv: Oof
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	int num1 = (atoi(argv[1]));
	int num2 = (atoi(argv[2]));
	int product = num1 * num2;

	printf("Sum %d and %d is %d\n", num1, num2, product);

	return (0);
}
