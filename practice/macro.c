#include <stdio.h>

#define MULT(x, y) (x) * (y)
/** surround macros in paranthesis casue all your doing is pasting
 * exaclty what you define the macro as.*/

int main()
{
	int a = MULT(9, 9);
	{
		printf("Sum :%d\n", a);
	}
}
