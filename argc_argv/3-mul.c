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
	int num1;
        int num2;
        int product;

        num1 = (atoi(argv[argc - 1]));
        num2 = (atoi(argv[argc - 2]));
        product = num1 * num2;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}	
	printf("%d\n", product);

	return (0);
}
