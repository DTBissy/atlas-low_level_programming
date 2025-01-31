#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This adds entries together
 * @argc: Arg
 * @argv: Arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

