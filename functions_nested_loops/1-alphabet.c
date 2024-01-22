#include <stdio.h>
/**
* main - Prints the alpha bet with prototype
* Return: 0
*/

void print_alphabet(void)
{
	char a; 

	for (a ='a'; a <= 'z'; a++); 
	{
		putchar(a);
	
	}
}

int main()
{
	print_alphabet();
	return (0);
}
