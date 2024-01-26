#include <stdio.h>

/**
*main - Print Fizz and Buzz
*
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if ((a % 3 == 0 && a % 5 == 0))
			printf("%s ", "FizzBuzz");
		else if (a % 5 == 0)
			printf("%s ", "Buzz");
		else if (a % 3 == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", a);
	}
	return (0);
}
