#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*opera)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	
	if (argv[2][1])
	{
		printf("ERROR\n");
		exit(99);
	}

	opera = get_op_func(argv[2]);

	if (opera == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", opera(a, b));
	return (0);
}
