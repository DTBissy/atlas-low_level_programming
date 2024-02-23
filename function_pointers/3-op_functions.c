#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b)
{
	printf("Sum: %d\n", a + b);
	exit(0);
}

int op_sub(int a, int b)
{
	printf("Sum: %d\n", a - b);
	exit(0);
}

int op_mul(int a, int b)
{
	printf("Sum: %d\n", a * b);
	exit(0);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	printf("Sum: %d\n", a / b);
	exit(0);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	printf("Sum: %d\n", a % b);
	exit(0);
}
