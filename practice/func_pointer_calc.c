#include <stdio.h>

void add(int a, int b)
{
	printf("Sum is: %d\n", a+b);
}
void sub(int a, int b)
{
	printf("Sum is: %d\n", a-b);
}
void mult(int a, int b)
{
	printf("Sum is: %d\n", a*b);
}

int main()
{
	void (*fun_ptr_arr[])(int, int) = {add, sub, mult};
	unsigned int ch, a = 15, b = 10;
	printf("Enter Choice: 0 for add, 1 for subtract and 2 for mult\n");
	scanf("%d", &ch);
	
	if (ch > 2)
	{
		return (0);
	}
	(*fun_ptr_arr[ch])(a, b);
	return (0);
}


